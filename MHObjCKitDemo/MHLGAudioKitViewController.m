//
//  MHLGAudioKitViewController.m
//  MHObjCKitDemo
//
//  Created by MakeHui on 22/10/18.
//  Copyright © 2018年 MakeHui. All rights reserved.
//

#import <MHObjCKit/MHObjCKit.h>

#import "MHLGAudioKitViewController.h"

static const NSInteger kRecordLimit = 60;

@interface MHLGAudioKitViewController ()<LGSoundRecorderDelegate, LGAudioPlayerDelegate>
{
    dispatch_source_t _timerOf60Second;
}

@property (weak, nonatomic) IBOutlet UILabel *audioLength;
@property (weak, nonatomic) IBOutlet UILabel *playLength;

@end

@implementation MHLGAudioKitViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [LGSoundRecorder shareInstance].delegate = self;
    [LGAudioPlayer sharePlayer].delegate = self;
}

#pragma mark - IBAction, Callback

/**
 *  开始录音
 */
- (IBAction)startRecordVoiceTouchDown:(id)sender
{
    __block BOOL isAllow = false;
    AVAudioSession *audioSession = [AVAudioSession sharedInstance];
    if ([audioSession respondsToSelector:@selector(requestRecordPermission:)]) {
        [audioSession performSelector:@selector(requestRecordPermission:) withObject:^(BOOL granted) {
            isAllow = granted;
        }];
    }
    if (isAllow) {
        [[LGAudioPlayer sharePlayer] stopAudioPlayer]; //停止播放
        [[LGSoundRecorder shareInstance] startSoundRecord:self.view recordPath:[self createFolderInDocument:@"recordFolder"]];  //开始录音
        //开启定时器
        [self stopTimer];
        
        __weak typeof(self) weakSelf = self;
        _timerOf60Second = mh_dispatchTimer(self, 1.0, ^(dispatch_source_t timer) {
            int countDown = kRecordLimit - [[LGSoundRecorder shareInstance] soundRecordTime];
            NSLog(@"countDown is %d soundRecordTime is %f",countDown,[[LGSoundRecorder shareInstance] soundRecordTime]);
            if (countDown <= 10) {
                [[LGSoundRecorder shareInstance] showCountdown:countDown];
            }
            if ([[LGSoundRecorder shareInstance] soundRecordTime] >= kRecordLimit && [[LGSoundRecorder shareInstance] soundRecordTime] <= kRecordLimit + 1) {
                [weakSelf stopTimer];
                [weakSelf confirmRecordVoiceTouchUpInside:nil];
            }
        });
    }
}

/**
 *  录音结束
 */
- (IBAction)confirmRecordVoiceTouchUpInside:(id)sender
{
    if ([[LGSoundRecorder shareInstance] soundRecordTime] == 0) {
        [self cancelRecordVoiceTouchUpOutside:nil];
        return;//60s自动发送后，松开手走这里
    }
    if ([[LGSoundRecorder shareInstance] soundRecordTime] < 1.0f) {
        [self stopTimer];
        [[LGSoundRecorder shareInstance] showShotTimeSign:self.view];
        return;
    }
    [self setAudioData:true];
    [[LGSoundRecorder shareInstance] stopSoundRecord:self.view];
    
    [self stopTimer];
}

/**
 *  更新录音显示状态,手指向上滑动后 提示松开取消录音
 */
- (IBAction)updateCancelRecordVoiceTouchDragExit:(id)sender {
    [[LGSoundRecorder shareInstance] readyCancelSound];
}

/**
 *  更新录音状态,手指重新滑动到范围内,提示向上取消录音
 */
- (IBAction)updateContinueRecordVoiceTouchDragEnter:(id)sender {
    [[LGSoundRecorder shareInstance] resetNormalRecord];
}

/**
 *  取消录音
 */
- (IBAction)cancelRecordVoiceTouchUpOutside:(id)sender {
    [self setAudioData:false];
    [[LGSoundRecorder shareInstance] soundRecordFailed:self.view];
    [self stopTimer];
}

/**
 播放音频
 */
- (IBAction)onPlayTouchUpInside:(UIButton *)sender {
    [MBProgressHUD py_showSuccess:@"保存图片出错" toView:self.view];
    if ([sender.titleLabel.text isEqualToString:@"播放录音"]) {
        NSString *recordUrl = [[LGSoundRecorder shareInstance] soundFilePath];
        if ([recordUrl length] > 0) {
            [sender setTitle:@"暂停播放" forState:UIControlStateNormal];
            [[LGAudioPlayer sharePlayer] playAudioWithURLString:recordUrl atIndex:0];
        }
        else {
            self.audioLength.text = @"请先录音";
        }
    }
    else {
        [sender setTitle:@"播放录音" forState:UIControlStateNormal];
        [[LGAudioPlayer sharePlayer] stopAudioPlayer]; //停止播放
        
    }
}

#pragma mark - LGSoundRecorderDelegate, LGAudioPlayerDelegate

- (void)showSoundRecordFailed
{
//    [[SoundRecorder shareInstance] soundRecordFailed:self];
    self.audioLength.text = [NSString stringWithFormat:@"%@ - 录音失败", self.audioLength.text];
    [self stopTimer];
}

- (void)didStopSoundRecord
{
    self.audioLength.text = [NSString stringWithFormat:@"%@ - 录音结束", self.audioLength.text];
    [self stopTimer];
}

- (void)audioPlayerStateDidChanged:(LGAudioPlayerState)audioPlayerState forIndex:(NSUInteger)index
{
    switch (audioPlayerState) {
        case LGAudioPlayerStateNormal:
            self.playLength.text  = [NSString stringWithFormat:@"未播放"];
            break;
        case LGAudioPlayerStatePlaying:
            self.playLength.text  = [NSString stringWithFormat:@"正在播放"];
            break;
        case LGAudioPlayerStateCancel:
            self.playLength.text  = [NSString stringWithFormat:@"取消播放"];
            break;
            
        default:
            break;
    }
}

#pragma mark - Function

dispatch_source_t mh_dispatchTimer(id target, double timeInterval,void (^handler)(dispatch_source_t timer))
{
    dispatch_queue_t queue = dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0);
    dispatch_source_t timer = dispatch_source_create(DISPATCH_SOURCE_TYPE_TIMER,0, 0, queue);
    dispatch_source_set_timer(timer, dispatch_walltime(NULL, 0), (uint64_t)(timeInterval *NSEC_PER_SEC), 0);
    // 设置回调
    __weak __typeof(target) weaktarget  = target;
    dispatch_source_set_event_handler(timer, ^{
        if (!weaktarget)  {
            dispatch_source_cancel(timer);
        } else {
            dispatch_async(dispatch_get_main_queue(), ^{
                if (handler) handler(timer);
            });
        }
    });
    // 启动定时器
    dispatch_resume(timer);
    
    return timer;
}

- (void)stopTimer
{
    if (_timerOf60Second) {
        dispatch_source_cancel(_timerOf60Second);
        _timerOf60Second = nil;
    }
}

- (NSString *)createFolderInDocument:(NSString *)folderName
{
    NSString *filePath = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0];
    filePath = [filePath stringByAppendingPathComponent:@"SoundFile"];
    if (![[NSFileManager defaultManager] fileExistsAtPath:filePath]) {
        NSError *error = nil;
        [[NSFileManager defaultManager] createDirectoryAtPath:filePath withIntermediateDirectories:NO attributes:nil error:&error];
        if (error) {
            NSLog(@"%@", error);
        }
    }
    return filePath;
}

- (void)setAudioData:(BOOL)success
{
    int audioLength = success ? [[LGSoundRecorder shareInstance] soundRecordTime] : 0;
    self.audioLength.text = [NSString stringWithFormat:@"录音长度: %ds", audioLength];
}



@end
