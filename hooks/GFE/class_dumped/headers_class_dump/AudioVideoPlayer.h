//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@class FileAttachmentView, MPMoviePlayerViewController, NSString;

@interface AudioVideoPlayer : NSObject
{
    NSString *_audioVideoFile;
    FileAttachmentView *_parent;
    MPMoviePlayerViewController *_avPlayerController;
}

@property(nonatomic) FileAttachmentView *parent; // @synthesize parent=_parent;
- (void)onMediaPlayerHasChangedScalingMode:(id)arg1;
- (void)onMediaPlayerHasStoppedPlaying:(id)arg1;
- (BOOL)isFileOfAudioOrVideoType:(id)arg1;
- (void)playAudioVideoFile:(id)arg1;
- (void)stopPlayer;
- (void)dealloc;
- (id)init;
- (void)avpLogMsg:(id)arg1;
- (void)registerForMediaPlayerNotifications:(id)arg1;
- (id)getFileType;
- (id)getFileName;

@end
