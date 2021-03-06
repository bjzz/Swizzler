//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@class NSDate, NSURL;

@interface SBFailedHost : NSObject
{
    NSURL *_url;
    NSDate *_date;
    int _errorCode;
}

+ (id)failedHostWithURL:(id)arg1 errorCode:(int)arg2;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)dealloc;
- (id)init;

@end

