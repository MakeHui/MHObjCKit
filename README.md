# MHObjCKit

Make some iOS 3rdparty libraries support `Carthage`

## Requirements

- iOS 8.0+
- Xcode 9.0+

## Installation

### Carthage

[Carthage](https://github.com/Carthage/Carthage) is a decentralized dependency manager that builds your dependencies and provides you with binary frameworks.

You can install Carthage with [Homebrew](http://brew.sh/) using the following command:

```
$ brew update
$ brew install carthage
```

To integrate MHObjCKit into your Xcode project using Carthage, specify it in your `Cartfile`:

```
github "MakeHui/MHObjCKit"
```

Run `carthage update` to build the framework and drag the built `MHObjCKit.framework` into your Xcode project.

## Usage

```
#import <MHObjCKit/MHObjCKit.h>
```

## 3rdparty

### v1.6.1

- [sakkaras/SKSTableView (master == edc6b78)](https://github.com/sakkaras/SKSTableView)

### v1.6.0

- [iTofu/LCActionSheet (v3.5.0)](https://github.com/iTofu/LCActionSheet)
- [ko1o/PYSearch (v0.9.0 < 7ff3586)](https://github.com/ko1o/PYSearch)

### v1.5.0

- [zhifenx/JFCitySelector(master 6b72c63)](https://github.com/zhifenx/JFCitySelector)

### v1.4.1

- [guange2015/ios-amr(v1.3 eff9391)](https://github.com/guange2015/ios-amr)

### v1.4.0

- [Flipboard/FLAnimatedImage](https://github.com/Flipboard/FLAnimatedImage)
- [ko1o/PYPhotoBrowser](https://github.com/ko1o/PYPhotoBrowser)

### v1.3.0

- [MakeHui/NSTEasyJSON](https://github.com/MakeHui/NSTEasyJSON)
- ~~[bernikowich/NSTEasyJSON](https://github.com/bernikowich/NSTEasyJSON)~~
- ~~[newyjp/JPNavigationController](https://github.com/newyjp/JPNavigationController)~~

### v1.2.0

- [zhhlmr/ZHPopupView](https://github.com/zhhlmr/ZHPopupView)
- ~~[forkingdog/FDFullscreenPopGesture](https://github.com/forkingdog/FDFullscreenPopGesture)~~

### v1.1.0

- [paytronix/ASIHTTPRequest](https://github.com/paytronix/ASIHTTPRequest)
- [tonymillion/Reachability](https://github.com/tonymillion/Reachability)
- [renzifeng/ZFDownload](https://github.com/renzifeng/ZFDownload)
- [renzifeng/ZFNavigationController](https://github.com/renzifeng/ZFNavigationController)
- [renzifeng/ZFPlayer](https://github.com/renzifeng/ZFPlayer)

### v1.0.0

- [forkingdog/FDStackView](https://github.com/forkingdog/FDStackView)
- [fabiocaccamo/FCUUID](https://github.com/fabiocaccamo/FCUUID)
- [gsdios/SDCycleScrollView](https://github.com/gsdios/SDCycleScrollView)
- ~~[bernikowich/NSTEasyJSON](https://github.com/bernikowich/NSTEasyJSON)~~
- [danielgindi/NSUserDefaults-DefaultValues](https://github.com/danielgindi/NSUserDefaults-DefaultValues)
- ~~[newyjp/JPNavigationController](https://github.com/newyjp/JPNavigationController)~~
- [newyjp/JPVideoPlayer](https://github.com/newyjp/JPVideoPlayer)
- ~~[forkingdog/FDFullscreenPopGesture](https://github.com/forkingdog/FDFullscreenPopGesture)~~

## License

MHObjCKit is released under the MIT license. See LICENSE for details.
