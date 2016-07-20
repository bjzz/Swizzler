//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UITableViewController.h"

#import "FileViewerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"

@class AudioVideoDocumentsPlayer, DocumentsController, DocumentsSplitViewController, EmailData, GUBarButtonItem, GUToolBar, NSIndexPath, NSMutableData, NSMutableSet, NSString, NSTimer, NSURLConnection, UIActionSheet, UIBarButtonItem, UIImagePickerController, UIPopoverController;

@interface DocumentsTVC : UITableViewController <UISearchDisplayDelegate, UISearchBarDelegate, UIActionSheetDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, FileViewerDelegate>
{
    DocumentsController *_documentsController;
    BOOL _shouldActivateSearchController;
    DocumentsSplitViewController *_documentsSVC;
    NSIndexPath *actionIndexPath;
    int _fileFilterType;
    int _fileAttrSortType;
    int _fileAttrSortDirection;
    NSMutableSet *_markedDocuments;
    BOOL _multiEditingEnabled;
    BOOL _isAttaching;
    BOOL _isWatchingForBars;
    NSTimer *_hideBarsTimer;
    BOOL _isRefreshDocsTable;
    EmailData *_emailData;
    AudioVideoDocumentsPlayer *_avDocsPlayer;
    UIImagePickerController *_imagePicker;
    UIPopoverController *_currentPopover;
    NSMutableData *_receivedArchiveData;
    NSURLConnection *_connection;
    BOOL loadInProgress;
    BOOL archiveFileIsOpen;
    BOOL showToolBarForArchiveFile;
    GUBarButtonItem *editButton;
    GUBarButtonItem *cancelEditButton;
    GUBarButtonItem *multiSendButton;
    GUBarButtonItem *multiDeleteButton;
    GUToolBar *multiEditingToolbar;
    UIBarButtonItem *multiAttachButton;
    GUBarButtonItem *cameraButton;
    UIActionSheet *currentActionSheet;
    NSString *archiveUrl;
    NSIndexPath *archiveIndexPath;
}

@property(nonatomic) BOOL showToolBarForArchiveFile; // @synthesize showToolBarForArchiveFile;
@property(retain, nonatomic) NSIndexPath *archiveIndexPath; // @synthesize archiveIndexPath;
@property(retain, nonatomic) NSString *archiveUrl; // @synthesize archiveUrl;
@property(nonatomic) BOOL archiveFileIsOpen; // @synthesize archiveFileIsOpen;
@property(retain, nonatomic) UIActionSheet *currentActionSheet; // @synthesize currentActionSheet;
@property(retain, nonatomic) NSTimer *hideBarsTimer; // @synthesize hideBarsTimer=_hideBarsTimer;
@property(retain, nonatomic) GUBarButtonItem *cameraButton; // @synthesize cameraButton;
@property(retain, nonatomic) UIBarButtonItem *multiAttachButton; // @synthesize multiAttachButton;
@property(retain, nonatomic) GUToolBar *multiEditingToolbar; // @synthesize multiEditingToolbar;
@property(retain, nonatomic) GUBarButtonItem *multiDeleteButton; // @synthesize multiDeleteButton;
@property(retain, nonatomic) GUBarButtonItem *multiSendButton; // @synthesize multiSendButton;
@property(retain, nonatomic) GUBarButtonItem *cancelEditButton; // @synthesize cancelEditButton;
@property(retain, nonatomic) GUBarButtonItem *editButton; // @synthesize editButton;
@property(nonatomic, getter=isMultiEditingEnabled) BOOL multiEditingEnabled; // @synthesize multiEditingEnabled=_multiEditingEnabled;
@property(nonatomic) DocumentsSplitViewController *documentsSVC; // @synthesize documentsSVC=_documentsSVC;
@property(retain, nonatomic) NSIndexPath *actionIndexPath; // @synthesize actionIndexPath;
@property(nonatomic) BOOL loadInProgress; // @synthesize loadInProgress;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)cancelConnection;
- (void)stopConnection;
- (void)initiateConnectionForArchiveFileWithURL:(id)arg1;
- (void)backToAttachmentView;
- (void)actionMultiAttach;
- (void)actionMultiDeleteButton;
- (void)actionMultiSendButton;
- (void)actionCancelAttach;
- (void)actionCancelEdit;
- (void)actionEdit;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheetCancel:(id)arg1;
- (void)searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(int)arg2;
- (void)searchBarResultsListButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarBookmarkButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (BOOL)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (BOOL)searchBarShouldEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchScope:(int)arg2;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayController:(id)arg1 didHideSearchResultsTableView:(id)arg2;
- (void)searchDsasaslayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 didShowSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)updateMultiAttachingButton;
- (void)updateMultipleEditingToolbarButtons;
- (void)toggleMultiEditing;
- (void)playbackDidFinish:(id)arg1;
- (void)fileViewerDidLoadDocument;
- (void)viewArchiveFile:(id)arg1 fromURL:(id)arg2;
- (id)viewFile:(id)arg1 fromURL:(id)arg2;
- (void)viewFileAtIndexPath:(id)arg1;
- (void)openDocumentWithUrl:(id)arg1 repoFile:(id)arg2;
- (void)openDocumentWith:(id)arg1;
- (void)updateLastViewed:(id)arg1;
- (void)showConfirmMultipleDeleteActionSheet;
- (void)showConfirmDeleteActionSheet:(id)arg1;
- (void)handleOnCellLongPress:(id)arg1;
- (void)deleteCellsAtIndexPaths:(id)arg1;
- (void)deleteCellAtIndexPath:(id)arg1;
- (void)updateSearchBarForCurrentState;
- (void)showNoFileSelectedScreenWithToolBar:(BOOL)arg1;
- (void)showDocumentsInfoScreen:(id)arg1 withText:(id)arg2;
- (void)showPasswordProtectedFileScreen:(id)arg1 withDelegate:(id)arg2;
- (void)showBarsNotification;
- (void)hideBars;
- (void)stopHideTimer;
- (void)startHideTimer;
- (void)stopWatchingBars;
- (void)startWatchingBars;
- (void)documentsHaveBeenDisabled;
- (void)presentImagePickOptions:(id)arg1;
- (void)openPictureGallery:(id)arg1;
- (void)openCamera:(id)arg1;
- (void)openImagePicker:(id)arg1 sourceType:(int)arg2;
- (void)closeImagePicker;
- (void)closePopover;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)refreshDocsTable;
- (void)refreshNavigationItems;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initForAttaching:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)getDefaultAutomationScreenName;

@end
