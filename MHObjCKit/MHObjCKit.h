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

// https://github.com/renzifeng/ZFNavigationController
#import <MHObjCKit/UINavigationController+ZFFullscreenPopGesture.h>

// https://github.com/renzifeng/ZFPlayer
#import <MHObjCKit/ASValuePopUpView.h>
#import <MHObjCKit/ASValueTrackingSlider.h>
#import <MHObjCKit/UIImageView+ZFCache.h>
#import <MHObjCKit/UIView+CustomControlView.h>
#import <MHObjCKit/UIViewController+ZFPlayerRotation.h>
#import <MHObjCKit/UIWindow+CurrentViewController.h>
#import <MHObjCKit/MMMaterialDesignSpinner.h>
#import <MHObjCKit/ZFBrightnessView.h>
#import <MHObjCKit/ZFPlayer.h>
#import <MHObjCKit/ZFPlayerControlView.h>
#import <MHObjCKit/ZFPlayerControlViewDelegate.h>
#import <MHObjCKit/ZFPlayerModel.h>
#import <MHObjCKit/ZFPlayerView.h>

// https://github.com/newyjp/JPNavigationController
#import <MHObjCKit/JPBaseAnimationTransition.h>
#import <MHObjCKit/JPNavigationController.h>
#import <MHObjCKit/JPNavigationControllerCompat.h>
#import <MHObjCKit/JPNavigationControllerGestureRecognizer.h>
#import <MHObjCKit/JPNavigationControllerKit.h>
#import <MHObjCKit/JPNavigationControllerProtocol.h>
#import <MHObjCKit/JPNavigationControllerTransition.h>
#import <MHObjCKit/JPPushAnimationTransition.h>
#import <MHObjCKit/JPTransitionShadowView.h>
#import <MHObjCKit/JPWarpNavigationController.h>
#import <MHObjCKit/JPWarpViewController.h>
#import <MHObjCKit/UIColor+ImageGenerate.h>
#import <MHObjCKit/UINavigationBar+HitTest.h>
#import <MHObjCKit/UINavigationController+FulllScreenPopPush.h>
#import <MHObjCKit/UIView+ScreenCapture.h>
#import <MHObjCKit/UIViewController+ViewControllers.h>

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

// https://github.com/forkingdog/FDFullscreenPopGesture
#import <MHObjCKit/UINavigationController+FDFullscreenPopGesture.h>

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


