//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@class NSMutableArray;

@interface SBTabHistoryManager : NSObject
{
    NSMutableArray *_backForwardHistory;
    int _indexInBackForwardHistory;
}

@property(retain, nonatomic) NSMutableArray *backForwardHistory; // @synthesize backForwardHistory=_backForwardHistory;
- (void)dumpBackForwardHistory;
- (void)undoLastBackForwardHistory;
- (id)currentBackForwardHistoryItem;
- (id)forwardInBackForwardHistory;
- (id)backInBackForwardHistory;
- (id)peekAtForwardInBackForwardHistory;
- (id)peekAtBackInBackForwardHistory;
- (void)updateBackForwardHistoryWithUrlText:(id)arg1 pageTitle:(id)arg2;
- (id)appendBackForwardHistoryWithUrlText:(id)arg1 pageTitle:(id)arg2;
- (void)onRedirectionFromUrlStr:(id)arg1 toUrlStr:(id)arg2;
- (BOOL)canAddBackForwardHistoryForTheUrl:(id)arg1;
- (BOOL)canGoForwardInBackForwardHistory;
- (BOOL)canGoBackInBackForwardHistory;
- (void)dealloc;
- (id)init;

@end

