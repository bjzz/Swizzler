//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIWebView.h"

#import "UIActionSheetDelegate.h"

@class NSString, SBHintView, SBViewController, UIView;

@interface SBUIWebView : UIWebView <UIActionSheetDelegate>
{
    SBViewController *_sbViewController;
    UIView *_toolbar;
    SBHintView *_hintView;
    BOOL _browserViewIgnoresNextResignFirstResponder;
    BOOL _userInteractionCaptured;
    NSString *_selectedImageURL;
    NSString *_selectedLinkURL;
    int _cmCancelButtonIndex;
    int _cmOpenButtonIndex;
    int _cmOpenInNewTabButtonIndex;
    int _cmSaveImageButtonIndex;
    int _cmCopyButtonIndex;
    NSString *JSCODE_IsContextMenuDisabled;
}

+ (id)cssCodeToDisableContextMenu;
+ (id)jsCodeToDisableContextMenu;
@property(retain, nonatomic) NSString *JSCODE_IsContextMenuDisabled; // @synthesize JSCODE_IsContextMenuDisabled;
@property(nonatomic) BOOL browserViewIgnoresNextResignFirstResponder; // @synthesize browserViewIgnoresNextResignFirstResponder=_browserViewIgnoresNextResignFirstResponder;
@property(nonatomic) BOOL userInteractionCaptured; // @synthesize userInteractionCaptured=_userInteractionCaptured;
@property(readonly, nonatomic) SBHintView *hintView; // @synthesize hintView=_hintView;
@property(nonatomic) UIView *toolbar; // @synthesize toolbar=_toolbar;
@property(nonatomic) SBViewController *sbViewController; // @synthesize sbViewController=_sbViewController;
@property(nonatomic) int cmCopyButtonIndex; // @synthesize cmCopyButtonIndex=_cmCopyButtonIndex;
@property(nonatomic) int cmSaveImageButtonIndex; // @synthesize cmSaveImageButtonIndex=_cmSaveImageButtonIndex;
@property(nonatomic) int cmOpenInNewTabButtonIndex; // @synthesize cmOpenInNewTabButtonIndex=_cmOpenInNewTabButtonIndex;
@property(nonatomic) int cmOpenButtonIndex; // @synthesize cmOpenButtonIndex=_cmOpenButtonIndex;
@property(nonatomic) int cmCancelButtonIndex; // @synthesize cmCancelButtonIndex=_cmCancelButtonIndex;
@property(retain, nonatomic) NSString *selectedLinkURL; // @synthesize selectedLinkURL=_selectedLinkURL;
@property(retain, nonatomic) NSString *selectedImageURL; // @synthesize selectedImageURL=_selectedImageURL;
- (void)keepKeyboardDuringIFrameLoad;
- (void)hintViewIncomingDataNotif:(id)arg1;
- (void)updateHintViewPosition;
- (void)updateHintViewPosition_testing;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)openContextualMenuAt:(struct CGPoint)arg1;
- (void)longPressRecognized:(id)arg1;
- (struct CGPoint)positionInHTMLSpaceForWebviewPoint:(struct CGPoint)arg1;
- (void)addLongGestureAction:(SEL)arg1;
- (BOOL)isDefaultOSContextMenuDisabled;
- (void)disableDefaultOSContextMenu;
@property(readonly, nonatomic) NSString *contextMenuCopiedUrl;
@property(readonly, nonatomic) NSString *contextMenuSelectedUrl;
- (struct CGPoint)scrollOffset;
- (struct CGSize)windowSize;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)paste:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)setup;

@end
