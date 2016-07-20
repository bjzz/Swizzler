/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "AppStoreViewControllerProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AppStoreDetailViewController, AppStorePolicyManager, UITableViewCell;

@interface AppStoreViewController : _ABAddressBookAddRecord <UITableViewDataSource, UITableViewDelegate, AppStoreViewControllerProtocol>
{
    AppStoreDetailViewController *detailViewController;
    AppStorePolicyManager *policyManager;
    UITableViewCell *loadedCell;
    BOOL selected;
}

- (void)setLoadedCell:(id)fp8;
- (id)loadedCell;
- (void)setPolicyManager:(id)fp8;
- (id)policyManager;
- (void)setDetailViewController:(id)fp8;
- (id)detailViewController;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (void)setCell:(id)fp8 withPolicy:(id)fp12;
- (void)reloadViewData;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)dealloc;
- (id)initWithPolicyManager:(id)fp8;

@end
