//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "RowView.h"

@class SecurityBannerView, UIButton, UIImageView, UILabel, UITextView;

@interface RowSMIMESecurityComposeView : RowView
{
    UILabel *_message;
    UIImageView *_securitySignedIcon;
    UIImageView *_securityEncryptedIcon;
    UIButton *_securitySelection;
    UILabel *_title;
    SecurityBannerView *_bannerView;
    UITextView *_bannerTextView;
}

@property(readonly, nonatomic) UITextView *bannerTextView; // @synthesize bannerTextView=_bannerTextView;
@property(readonly, nonatomic) UIButton *securitySelection; // @synthesize securitySelection=_securitySelection;
@property(readonly, nonatomic) UILabel *message; // @synthesize message=_message;
- (void)setContentSizeCategory:(id)arg1;
- (void)layoutSubviews;
- (void)disableBannerView;
- (void)enableBannerView:(id)arg1;
- (void)enableEncryptedIcon:(BOOL)arg1;
- (void)enableSignedIcon:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

