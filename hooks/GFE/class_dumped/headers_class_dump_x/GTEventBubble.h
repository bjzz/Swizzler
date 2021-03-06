/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "GTAllDayObject-Protocol.h"

@class CalendarOccurrence, UIImageView, UILabel, UIView;

@interface GTEventBubble : _ABAddressBookAddRecord <GTAllDayObject>
{
    struct CGSize _timeSize;
    BOOL _shouldCacheBackgroundImage;
    BOOL _disableLayoutBubble;
    BOOL _conflict;
    CalendarOccurrence *_occurrence;
    UILabel *_subjectLabel;
    UILabel *_timeLabel;
    UILabel *_locationLabel;
    UIImageView *_icon1;
    UIImageView *_icon2;
    UIImageView *_statusImageView;
    UIView *_contentView;
    int _flag;
    UIView *_resizableOverlay;
}

+ (void)initialize;
- (void)setConflict:(BOOL)fp8;
- (BOOL)conflict;
- (void)setResizableOverlay:(id)fp8;
- (id)resizableOverlay;
- (int)flag;
- (void)setDisableLayoutBubble:(BOOL)fp8;
- (BOOL)disableLayoutBubble;
- (void)setContentView:(id)fp8;
- (id)contentView;
- (void)setStatusImageView:(id)fp8;
- (id)statusImageView;
- (void)setIcon2:(id)fp8;
- (id)icon2;
- (void)setIcon1:(id)fp8;
- (id)icon1;
- (void)setLocationLabel:(id)fp8;
- (id)locationLabel;
- (void)setTimeLabel:(id)fp8;
- (id)timeLabel;
- (void)setSubjectLabel:(id)fp8;
- (id)subjectLabel;
- (id)occurrence;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (void)dissmissResizableOverlay;
- (void)presentResizableOverlay;
- (void)setFlag:(int)fp8;
- (void)animateFromHighlightedState;
- (void)showHighlightedState;
- (void)showPressedState;
- (void)showNormalState;
- (void)updateBubble;
- (void)prepareForReuse;
- (void)layoutBubble;
- (struct CGSize)locationSizeWithConstrainedToSize:(struct CGSize)fp8;
- (void)setFrame:(struct CGRect)fp8;
- (void)setOccurrence:(id)fp8;
- (id)createLabel;
- (id)hitTest:(struct CGPoint)fp8 withEvent:(id)fp16;
- (void)didStopDragging:(id)fp8;
- (void)didStartDragging:(id)fp8;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)dealloc;

@end

