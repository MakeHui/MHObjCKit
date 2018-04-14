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

### v1.0.0

- [forkingdog/FDStackView](https://github.com/forkingdog/FDStackView)
- [fabiocaccamo/FCUUID](https://github.com/fabiocaccamo/FCUUID)
- [gsdios/SDCycleScrollView](https://github.com/gsdios/SDCycleScrollView)
- [bernikowich/NSTEasyJSON](https://github.com/bernikowich/NSTEasyJSON)
- [danielgindi/NSUserDefaults-DefaultValues](https://github.com/danielgindi/NSUserDefaults-DefaultValues)
- [newyjp/JPNavigationController](https://github.com/newyjp/JPNavigationController)
- [newyjp/JPVideoPlayer](https://github.com/newyjp/JPVideoPlayer)
- [forkingdog/FDFullscreenPopGesture](https://github.com/forkingdog/FDFullscreenPopGesture)

## License

MHObjCKit is released under the MIT license. See LICENSE for details.
