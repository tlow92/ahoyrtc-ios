//
//  CallDelegateProtocol.h
//  AhoyUC
//
//  Created by kapejod on 06/01/15.
//  Copyright (c) 2015 Junghanns Communications GmbH. All rights reserved.
//

@class AhoySession;
@class RTCMediaStream;

@protocol AhoySessionDelegateProtocol <NSObject>

@required
- (void)sessionDidGetAcknowledged:(AhoySession *)call;
- (void)sessionDidGetAnswered:(AhoySession *)call withPeer:(NSDictionary *)peer;
- (void)sessionDidGetRejected:(AhoySession *)call withReason:(NSString *)reason;
- (void)sessionDidGetCanceled:(AhoySession *)call;
- (void)sessionDidGetTerminated:(AhoySession *)call;
- (void)sessionDidFail:(AhoySession *)call;
- (void)sessionDidGetLocalMediaStream:(AhoySession *)call withMediaStream:(RTC_OBJC_TYPE(RTCMediaStream) *) stream;
- (void)sessionDidNotGetLocalMediaStream:(AhoySession *)call withError:(NSString *) error;
- (void)sessionDidGetRemoteMediaStream:(AhoySession *)call withMediaStream:(RTC_OBJC_TYPE(RTCMediaStream) *) stream;
- (void)sessionDidChangeRemoteMediaStatus:(AhoySession *)call withAudio:(BOOL)audioActive withVideo:(BOOL)videoActive;
- (void)sessionIsProgressing:(AhoySession *)call withInformation:(NSDictionary *)information;
- (void)sessionDidGetHandledElsewhere:(AhoySession *)call;
- (void)sessionDidEstablishMediaLayer:(AhoySession *)call;
- (void)sessionDidDisconnectMediaLayer:(AhoySession *)call;
- (void)sessionDidFailToEstablishMediaLayer:(AhoySession *)call;
@end
