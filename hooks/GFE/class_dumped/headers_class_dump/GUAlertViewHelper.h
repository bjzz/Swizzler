//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class NSMutableDictionary;

@interface GUAlertViewHelper : NSObject <UIAlertViewDelegate>
{
    NSMutableDictionary *presentedAlertViews;
}

+ (id)alertNamed:(id)arg1;
+ (BOOL)dismissNamedAlert:(id)arg1 withButtonClicked:(int)arg2 animated:(BOOL)arg3;
+ (void)showHiddenAlerts;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedGUAlertViewHelper;
@property(retain, nonatomic) NSMutableDictionary *presentedAlertViews; // @synthesize presentedAlertViews;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)presentAlertView:(id)arg1 named:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)dismissedHandlerForAlertView:(id)arg1;
- (void)removeAlertView:(id)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned int)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
