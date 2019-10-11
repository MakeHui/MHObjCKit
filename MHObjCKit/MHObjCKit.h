//
//  MHObjCKit.h
//  MHObjCKit
//
//  Created by MakeHui on 2018/4/14.
//  Copyright © 2018年 MakeHui. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for MHObjCKit.
FOUNDATION_EXPORT double MHObjCKitVersionNumber;

//! Project version string for MHObjCKit.
FOUNDATION_EXPORT const unsigned char MHObjCKitVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <MHObjCKit/PublicHeader.h>

// https://github.com/paytronix/ASIHTTPRequest
#import <MHObjCKit/ASIAuthenticationDialog.h>
#import <MHObjCKit/ASICacheDelegate.h>
#import <MHObjCKit/ASIDataCompressor.h>
#import <MHObjCKit/ASIDataDecompressor.h>
#import <MHObjCKit/ASIDownloadCache.h>
#import <MHObjCKit/ASIFormDataRequest.h>
#import <MHObjCKit/ASIHTTPRequest.h>
#import <MHObjCKit/ASIHTTPRequestConfig.h>
#import <MHObjCKit/ASIHTTPRequestDelegate.h>
#import <MHObjCKit/ASIInputStream.h>
#import <MHObjCKit/ASINetworkQueue.h>
#import <MHObjCKit/ASIProgressDelegate.h>
#import <MHObjCKit/ASIWebPageRequest.h>
#import <MHObjCKit/ASICloudFilesCDNRequest.h>
#import <MHObjCKit/ASICloudFilesContainer.h>
#import <MHObjCKit/ASICloudFilesContainerRequest.h>
#import <MHObjCKit/ASICloudFilesContainerXMLParserDelegate.h>
#import <MHObjCKit/ASICloudFilesObject.h>
#import <MHObjCKit/ASICloudFilesObjectRequest.h>
#import <MHObjCKit/ASICloudFilesRequest.h>
#import <MHObjCKit/ASINSXMLParserCompat.h>
#import <MHObjCKit/ASIS3Bucket.h>
#import <MHObjCKit/ASIS3BucketObject.h>
#import <MHObjCKit/ASIS3BucketRequest.h>
#import <MHObjCKit/ASIS3ObjectRequest.h>
#import <MHObjCKit/ASIS3Request.h>
#import <MHObjCKit/ASIS3ServiceRequest.h>

// https://github.com/tonymillion/Reachability
#import <MHObjCKit/Reachability.h>

// https://github.com/renzifeng/ZFDownload
#import <MHObjCKit/ZFCommonHelper.h>
#import <MHObjCKit/ZFDownloadDelegate.h>
#import <MHObjCKit/ZFDownloadManager.h>
#import <MHObjCKit/ZFFileModel.h>
#import <MHObjCKit/ZFHttpRequest.h>


// https://github.com/renzifeng/ZFPlayer
#import <MHObjCKit/ZFPlayer.h>
#import <MHObjCKit/ZFAVPlayerManager.h>
#import <MHObjCKit/UIView+ZFFrame.h>
#import <MHObjCKit/ZFLandScapeControlView.h>
#import <MHObjCKit/ZFLoadingView.h>
#import <MHObjCKit/ZFNetworkSpeedMonitor.h>
#import <MHObjCKit/ZFPlayerControlView.h>
#import <MHObjCKit/ZFPortraitControlView.h>
#import <MHObjCKit/ZFSliderView.h>
#import <MHObjCKit/ZFSmallFloatControlView.h>
#import <MHObjCKit/ZFSpeedLoadingView.h>
#import <MHObjCKit/ZFUtilities.h>
#import <MHObjCKit/ZFVolumeBrightnessView.h>
#import <MHObjCKit/ZFFloatView.h>
#import <MHObjCKit/ZFKVOController.h>
#import <MHObjCKit/ZFOrientationObserver.h>
#import <MHObjCKit/ZFPlayerController.h>
#import <MHObjCKit/ZFPlayerGestureControl.h>
#import <MHObjCKit/ZFPlayerLogManager.h>
#import <MHObjCKit/ZFPlayerMediaControl.h>
#import <MHObjCKit/ZFPlayerMediaPlayback.h>
#import <MHObjCKit/ZFPlayerNotification.h>
#import <MHObjCKit/ZFPlayerView.h>
#import <MHObjCKit/ZFReachabilityManager.h>
#import <MHObjCKit/KSMediaPlayerManager.h>
#import <MHObjCKit/ZFIJKPlayerManager.h>
#import <MHObjCKit/UIImageView+ZFCache.h>
#import <MHObjCKit/UIScrollView+ZFPlayer.h>

// https://github.com/newyjp/JPVideoPlayer
#import <MHObjCKit/JPResourceLoadingRequestTask.h>
#import <MHObjCKit/JPVideoPlayer.h>
#import <MHObjCKit/JPVideoPlayerCache.h>
#import <MHObjCKit/JPVideoPlayerCacheFile.h>
#import <MHObjCKit/JPVideoPlayerCachePath.h>
#import <MHObjCKit/JPVideoPlayerCompat.h>
#import <MHObjCKit/JPVideoPlayerControlViews.h>
#import <MHObjCKit/JPVideoPlayerDownloader.h>
#import <MHObjCKit/JPVideoPlayerManager.h>
#import <MHObjCKit/JPVideoPlayerProtocol.h>
#import <MHObjCKit/JPVideoPlayerResourceLoader.h>
#import <MHObjCKit/JPVideoPlayerSupportUtils.h>
#import <MHObjCKit/UITableView+WebVideoCache.h>
#import <MHObjCKit/UITableViewCell+WebVideoCache.h>
#import <MHObjCKit/UIView+WebVideoCache.h>

// https://github.com/fabiocaccamo/FCUUID
#import <MHObjCKit/FCUUID.h>
#import <MHObjCKit/UIDevice+FCUUID.h>

// https://github.com/forkingdog/FDStackView
#import <MHObjCKit/FDGapLayoutGuide.h>
#import <MHObjCKit/FDLayoutSpacer.h>
#import <MHObjCKit/FDStackView.h>
#import <MHObjCKit/FDStackViewAlignmentLayoutArrangement.h>
#import <MHObjCKit/FDStackViewDistributionLayoutArrangement.h>
#import <MHObjCKit/FDStackViewExtensions.h>
#import <MHObjCKit/FDStackViewLayoutArrangement.h>
#import <MHObjCKit/FDTransformLayer.h>

// https://github.com/bernikowich/NSTEasyJSON
#import <MHObjCKit/NSTEasyJSON.h>

// https://github.com/danielgindi/NSUserDefaults-DefaultValues
#import <MHObjCKit/NSUserDefaults+DefaultValues.h>

// https://github.com/gsdios/SDCycleScrollView
#import <MHObjCKit/TAAbstractDotView.h>
#import <MHObjCKit/TAAnimatedDotView.h>
#import <MHObjCKit/TADotView.h>
#import <MHObjCKit/TAPageControl.h>
#import <MHObjCKit/SDCollectionViewCell.h>
#import <MHObjCKit/SDCycleScrollView.h>
#import <MHObjCKit/UIView+SDExtension.h>

// https://github.com/zhhlmr/ZHPopupView
#import <MHObjCKit/UIColor+HexString.h>
#import <MHObjCKit/UIImageEffects.h>
#import <MHObjCKit/UIView+DropShadow.h>
#import <MHObjCKit/ZHPopupView.h>

// https://github.com/zhifenx/JFCitySelector (master 6b72c63)
#import <MHObjCKit/JFAreaDataManager.h>
#import <MHObjCKit/JFButton.h>
#import <MHObjCKit/JFCityCollectionFlowLayout.h>
#import <MHObjCKit/JFCityCollectionViewCell.h>
#import <MHObjCKit/JFCityHeaderView.h>
#import <MHObjCKit/JFCityTableViewCell.h>
#import <MHObjCKit/JFCityViewController.h>
#import <MHObjCKit/JFSearchView.h>
#import <MHObjCKit/JFLocation.h>

// https://github.com/iTofu/LCActionSheet (v3.5.0)
#import <MHObjCKit/LCActionSheet.h>
#import <MHObjCKit/LCActionSheetCell.h>
#import <MHObjCKit/LCActionSheetConfig.h>
#import <MHObjCKit/LCActionSheetViewController.h>
#import <MHObjCKit/UIDevice+LCActionSheet.h>
#import <MHObjCKit/UIImage+LCActionSheet.h>

// https://github.com/ko1o/PYSearch (v0.9.0 < 7ff3586)
#import <MHObjCKit/NSBundle+PYSearchExtension.h>
#import <MHObjCKit/PYSearch.h>
#import <MHObjCKit/PYSearchConst.h>
#import <MHObjCKit/PYSearchSuggestionViewController.h>
#import <MHObjCKit/PYSearchViewController.h>
#import <MHObjCKit/UIColor+PYSearchExtension.h>
#import <MHObjCKit/UIView+PYSearchExtension.h>

// https://github.com/sakkaras/SKSTableView (master == edc6b78)
#import <MHObjCKit/SKSTableView.h>
#import <MHObjCKit/SKSTableViewCell.h>
#import <MHObjCKit/SKSTableViewCellIndicator.h>

// https://github.com/lifution/Popover (v2.2)
#import <MHObjCKit/PopoverAction.h>
#import <MHObjCKit/PopoverView.h>
#import <MHObjCKit/PopoverViewCell.h>

// https://github.com/gang544043963/LGAudioKit (master == f903ab6)
#import <MHObjCKit/LGAudioKit.h>

// https://github.com/levey/AwesomeMenu
#import <MHObjCKit/AwesomeMenu.h>
#import <MHObjCKit/AwesomeMenuItem.h>
