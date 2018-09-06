# ahoytc-ios
AhoyRTC SDK for iOS (including the AhoyRTC WebRTC framework)

## Installation

### CocoaPods
Add the AhoyRTC pod into your Podfile and run `pod install`.

```
pod 'ahoyrtc-ios', podspec: 'https://raw.githubusercontent.com/ahoyconference/ahoyrtc-ios/master/AhoyKit.podspec'
```

### Carthage
1. Add `binary "https://raw.githubusercontent.com/ahoyconference/ahoyrtc-ios/master/CarthageAhoyRTC.json"` to your Cartfile.
2. Run `carthage update`.
3. Go to your Xcode project's "General" settings. Drag `AhoyKit.framework` and `WebRTC.framework` from `Carthage/Build/iOS` to the "Embedded Binaries" section.

## Notes
Ensure that you have a "Privacy - Microphone usage description" and / or "Privacy - Camera usage description" in your Info.plist.
