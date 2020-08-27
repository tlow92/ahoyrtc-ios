//
//  AhoyEAGLVideoView.h
//  AhoyKit
//
//  Created by kapejod on 22/09/15.
//  Copyright © 2015 AhoyRTC GmbH. All rights reserved.
//

#ifndef AhoyVideoView_h
#define AhoyVideoView_h

#import <WebRTC/RTCEAGLVideoView.h>
#if defined(RTC_SUPPORTS_METAL)
#import <WebRTC/RTCMTLVideoView.h>
#endif

#if defined(RTC_SUPPORTS_METAL)
#define AhoyVideoView RTCMTLVideoView
#define AhoyVideoViewDelegate RTCMTLVideoViewDelegate
#else
#define AhoyVideoView RTCEAGLVideoView
#define AhoyVideoViewDelegate RTCEAGLVideoViewDelegate
#endif


#endif /* AhoyVideoView_h */
