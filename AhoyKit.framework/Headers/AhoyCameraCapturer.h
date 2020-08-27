/*
 *  Copyright 2017 The WebRTC Project Authors. All rights reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#import <WebRTC/RTCCameraVideoCapturer.h>

// Controls the camera. Handles starting the capture, switching cameras etc.
@interface AhoyCameraCapturer : NSObject

- (instancetype)initWithCapturer:(RTC_OBJC_TYPE(RTCCameraVideoCapturer) *)capturer useFrontCamera:(BOOL)useFrontCamera;
- (instancetype)initWithCapturer:(RTC_OBJC_TYPE(RTCCameraVideoCapturer) *)capturer useFrontCamera:(BOOL)useFrontCamera width:(int)width height:(int)height;

- (void)startCapture;
- (void)stopCapture;
- (BOOL)switchCamera;
- (void)enableTorch;
- (void)disableTorch;
- (BOOL)isTorchEnabled;

@end
