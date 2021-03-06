//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UIViewController.h"

#import "ComposeTextViewDelegate.h"
#import "ContactInputMgrDelegate.h"
#import "ContactTypeDownAddressingMatchesTableViewMgrDelegate.h"
#import "FolderViewDataEmailSecurityInfoUpdate.h"
#import "GUBubbledTextInputMgrDelegate.h"
#import "GoodContactViewerDelegate.h"
#import "GoodEmailPickerDelegate.h"
#import "RecipientCertDelegate.h"
#import "SendEmailNotesIdPasswordVCDelegate.h"
#import "SmimeEmailDisplayProtocol.h"
#import "SmimeEmailReplyForwardProtocol.h"
#import "UIActionSheetDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "UITextFieldDelegate.h"
#import "UIWebViewDelegate.h"

@class ComposeTextView, ComposeViewMessageMarkingManager, ComposeViewSecurityManager, ContactTypeDownAddressingMatchesTableViewMgr, ContactTypeDownAddressingMgr, DetailKLDayViewController, DominoEmailPasswordVC, EmailData, EmailFooterView, EmailHeaderView, EmailMeetingData, EmailRootNC, EmailViewSecurityManager, FolderViewData, KLDayViewController, NSMutableDictionary, NSString, NSTimer, RecipientDetailsFactory, RowDominoSecurityView, RowView, UIColor, UILabel, UIScrollView, UITapGestureRecognizer, UIToolbar, UIView, UIWebView;

@interface EmailVC : UIViewController <ComposeTextViewDelegate, UIWebViewDelegate, UITextFieldDelegate, UIActionSheetDelegate, ContactTypeDownAddressingMatchesTableViewMgrDelegate, ContactInputMgrDelegate, GoodEmailPickerDelegate, GUBubbledTextInputMgrDelegate, SmimeEmailDisplayProtocol, FolderViewDataEmailSecurityInfoUpdate, SmimeEmailReplyForwardProtocol, UIPopoverControllerDelegate, UIGestureRecognizerDelegate, GoodContactViewerDelegate, SendEmailNotesIdPasswordVCDelegate, RecipientCertDelegate>
{
    EmailRootNC *_rootVC;
    EmailHeaderView *_headerView;
    EmailFooterView *_footerView;
    UIScrollView *_scrollView;
    UIToolbar *_toolbar;
    BOOL _wantsMore;
    BOOL _canReplyAll;
    BOOL _contentLayedOut;
    BOOL _deleteDraftOnCancel;
    BOOL _webViewHasSomeData;
    BOOL _canRenderAsHTML;
    BOOL _webViewHasError;
    BOOL _userSelectedBackButton;
    NSString *_recordNumber;
    NSTimer *_loadingTimer;
    UIViewController *_viewControllerForiPadModals;
    RowView *_loadingRow;
    UILabel *_loadingLabelRow;
    UIWebView *_webView;
    UIView *_containerView;
    NSMutableDictionary *_detailRowViews;
    FolderViewData *_folderViewData;
    EmailData *_cachedEmailData;
    EmailMeetingData *_emailMeetingData;
    RecipientDetailsFactory *_recipientDetailsFactory;
    NSMutableDictionary *_contactBubbledTextInputMgrs;
    ContactTypeDownAddressingMgr *_contactTypeDownAddressingMgr;
    ContactTypeDownAddressingMatchesTableViewMgr *_contactTypeDownAddressingMatchesTableViewMgr;
    unsigned int _currentRowView;
    ComposeTextView *_composeTextViewRow;
    EmailViewSecurityManager *_emailViewSecurityManager;
    ComposeViewSecurityManager *_composeSecurityManager;
    ComposeViewMessageMarkingManager *_composeMessageClassificationManager;
    ComposeViewMessageMarkingManager *_composeMessageCaveatsManager;
    BOOL _senderCertFound;
    BOOL _recipientCertsFound;
    BOOL _smimeEncodingInProgress;
    BOOL _smimeProcessSendMessage;
    BOOL _disableSendButton;
    RowDominoSecurityView *_dominoPadlockCell;
    DominoEmailPasswordVC *_dominoEmailPassword;
    BOOL dismissScheduled;
    BOOL _anyRecipientWasEdited;
    DetailKLDayViewController *_detailDayViewController;
    KLDayViewController *_calDayViewController;
    UIView *_currentPopoverInitiatorView;
    UIColor *_webViewBackgroundColor;
    BOOL _restoreFolderViewDataViewVisibilityFlag;
    struct UIAListener *optionsDBListener;
    unsigned int _permittedArrowDirectionsForCurrentPopover;
    BOOL _openedFromDraft;
    BOOL _classificationWasEdited;
    BOOL _caveatWasEdited;
    struct CGPoint _headerInitialOffset;
    BOOL _securityWasEdited;
    BOOL _showPagingControls;
    BOOL readyToSetTitle;
    BOOL _waitForEmbeddedContent;
    UITapGestureRecognizer *_singleTapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    int displayedAttachmentsCount;
    id <EmailVCDelegate> _delegate;
}

+ (BOOL)checkAndSaveValidAttachments:(id)arg1 onEmail:(id)arg2;
+ (void)showAlertViewAttachmentsBlockedForSending;
+ (void)showModalComposeWithAttachedDocumentRecordIDs:(id)arg1;
+ (void)showModalComposeWithAttachedFile:(id)arg1;
+ (void)showModalComposeIn:(id)arg1 forRecord:(unsigned short)arg2 withComposeType:(int)arg3;
+ (void)showModalComposeIn:(id)arg1 forRecord:(unsigned short)arg2 withRecipient:(id)arg3 subject:(id)arg4 body:(id)arg5 withComposeType:(int)arg6;
+ (void)showModalComposeIn:(id)arg1 forRecord:(unsigned short)arg2 withRecipient:(id)arg3 withBcc:(id)arg4 withCC:(id)arg5 subject:(id)arg6 body:(id)arg7 withComposeType:(int)arg8;
@property(nonatomic) BOOL waitForEmbeddedContent; // @synthesize waitForEmbeddedContent=_waitForEmbeddedContent;
@property(nonatomic) BOOL readyToSetTitle; // @synthesize readyToSetTitle;
@property(nonatomic) BOOL showPagingControls; // @synthesize showPagingControls=_showPagingControls;
@property(nonatomic) BOOL securityWasEdited; // @synthesize securityWasEdited=_securityWasEdited;
@property(nonatomic) id <EmailVCDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) DominoEmailPasswordVC *dominoEmailPassword; // @synthesize dominoEmailPassword=_dominoEmailPassword;
@property(nonatomic) BOOL anyRecipientWasEdited; // @synthesize anyRecipientWasEdited=_anyRecipientWasEdited;
@property(nonatomic) int displayedAttachmentsCount; // @synthesize displayedAttachmentsCount;
@property(retain, nonatomic) UIViewController *viewControllerForiPadModals; // @synthesize viewControllerForiPadModals=_viewControllerForiPadModals;
@property(nonatomic) BOOL deleteDraftOnCancel; // @synthesize deleteDraftOnCancel=_deleteDraftOnCancel;
@property(retain, nonatomic) UIColor *webViewBackgroundColor; // @synthesize webViewBackgroundColor=_webViewBackgroundColor;
@property(readonly, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // @synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *singleTapGestureRecognizer; // @synthesize singleTapGestureRecognizer=_singleTapGestureRecognizer;
@property(retain, nonatomic) RowView *loadingRow; // @synthesize loadingRow=_loadingRow;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) BOOL disableSendButton; // @synthesize disableSendButton=_disableSendButton;
@property(retain, nonatomic) EmailHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) ContactTypeDownAddressingMatchesTableViewMgr *contactTypeDownAddressingMatchesTableViewMgr; // @synthesize contactTypeDownAddressingMatchesTableViewMgr=_contactTypeDownAddressingMatchesTableViewMgr;
@property(retain, nonatomic) ContactTypeDownAddressingMgr *contactTypeDownAddressingMgr; // @synthesize contactTypeDownAddressingMgr=_contactTypeDownAddressingMgr;
@property(retain, nonatomic) RecipientDetailsFactory *recipientDetailsFactory; // @synthesize recipientDetailsFactory=_recipientDetailsFactory;
@property(retain, nonatomic) NSMutableDictionary *contactBubbledTextInputMgrs; // @synthesize contactBubbledTextInputMgrs=_contactBubbledTextInputMgrs;
@property(retain, nonatomic) NSMutableDictionary *detailRowViews; // @synthesize detailRowViews=_detailRowViews;
@property(retain, nonatomic) EmailMeetingData *emailMeetingData; // @synthesize emailMeetingData=_emailMeetingData;
@property(retain, nonatomic) EmailData *cachedEmailData; // @synthesize cachedEmailData=_cachedEmailData;
@property(retain, nonatomic) ComposeTextView *composeTextViewRow; // @synthesize composeTextViewRow=_composeTextViewRow;
@property(nonatomic) FolderViewData *folderViewData; // @synthesize folderViewData=_folderViewData;
- (id).cxx_construct;
- (void)securitySelectionToggle:(id)arg1;
- (void)recipientCertSendEncryptedWhenPossible;
- (void)recipientCertDoNotEncryptMessage;
- (void)recipientCertRemoveRecipients;
- (void)dismissRecipientCertVC;
- (void)emailNotesIdPasswordVCCancel;
- (void)emailNotesIdPasswordVCSendMessage;
- (void)updateComposeEmailSmimeSecurityState;
- (void)showMessage:(id)arg1 withMsg:(id)arg2;
- (_Bool)checkErrorConditions:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)didReceiveSecurityInfoUpdateForRecNum:(unsigned short)arg1;
- (void)composeReplyOrForwardSmimeEmail:(int)arg1;
- (void)downloadRestOfMsgAndReplyOrForwardSmimeEmail:(int)arg1;
- (BOOL)WeHaveAllAttachments;
- (BOOL)WeHaveEntireBody;
- (id)getSmimeUiParent;
- (void)resetSmimeEmailAttachments:(unsigned short)arg1;
- (void)updateSmimeEmailDataAttach:(unsigned short)arg1;
- (void)updateSmimeEmailDataBody:(unsigned short)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)updateSendButtonStatus:(BOOL)arg1;
- (_Bool)validateAllRecipientsCertificateStatus;
- (_Bool)updateRecipientCertStatus:(struct GxUTF8String)arg1 certStatus:(int)arg2;
- (void)processNotification:(id)arg1;
- (void)lookupAllCerts:(unsigned short)arg1;
- (void)continueSendingEncryptedMessageWithOutSenderCert;
- (void)passwordAuthenicateSendMessageNow;
- (void)markingSavedForCaveats;
- (void)markingSavedForClassifications;
- (void)selectionViewDismissedForCaveats;
- (void)selectionViewDismissedForClassifications;
- (void)selectionViewDismissedForMarkings;
- (void)securitySelectionViewDismissed;
- (void)securitySelectionButtonSelected:(id)arg1;
- (void)hideKeyBoard;
- (void)updateOnDominoPasswordChange;
- (void)goodContactPickerDidCancel;
- (void)goodContactViewerShouldComposeAnEmail:(id)arg1;
- (void)goodEmailPickerSelectedPeople:(id)arg1;
- (void)typeDownAddressingCompletedWithMatches:(id)arg1 inputMgr:(id)arg2;
- (void)contactSelected:(id)arg1;
- (void)cancelMessage:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)actionInviteDecline;
- (void)actionInviteTentative;
- (void)actionInviteAccept;
- (void)sendInviteResponse;
- (void)inviteSeveralResponses;
- (void)inviteResponse;
- (id)buttonSetOnSubjectView;
- (void)computeInviteResponseNumber;
- (void)actionInviteShowConflicts:(id)arg1;
- (id)createCalendarViewController;
- (id)findTheOccurenceToShow;
- (void)actionShowContactPicker;
- (void)actionShowAttachments:(id)arg1;
- (void)actionShowMoreRecipients:(id)arg1;
- (void)actionDetails:(id)arg1;
- (void)actionViewRecipient:(id)arg1;
- (void)presentContactWithDetails:(id)arg1 button:(id)arg2;
- (void)actionSheetCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)loadingRowTimerHandler:(id)arg1;
- (void)hideLoadingRow;
- (void)showLoadingRow;
- (void)webViewDidStartLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)fontSizeChanged;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)appendTextToComposedText:(id)arg1 withNewLine:(BOOL)arg2;
- (void)updatePaperclip;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)ListenForOptionUpdate:(id)arg1;
- (void)unregisterToDBNotifications;
- (void)registerToDBNotifications;
- (struct CGSize)getKeyboardSize:(id)arg1;
- (void)unregisterForKeyboardNotifications;
- (void)registerForKeyboardNotifications;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
- (void)didDoubleTapWebView:(id)arg1;
- (void)didSingleTapWebView:(id)arg1;
- (void)dismiss:(id)arg1;
- (unsigned short)saveToDrafts;
- (void)buildComposeScreenWithDefaultEncryption:(BOOL)arg1;
- (void)buildComposeScreenWithReadOnlyRecipients;
- (BOOL)showAllRecipientsWithRowView:(id)arg1 showAll:(BOOL)arg2;
- (void)buildComposeScreen;
- (void)setupComposeNavigationButtons;
- (void)setupContactBubbledTextInputMgrs;
- (void)updateHeaderViewAndLookupView;
- (void)updateHeaderViewForRotation;
- (void)updateHeaderView;
- (void)updateLookupView;
- (BOOL)isComposingMessage;
- (void)validateSendButton;
- (void)resignAsFirstResponder;
- (void)removeAndSend:(id)arg1;
- (void)callMeetingResponseCommentsController:(id)arg1;
- (void)scheduledDismissNoAnimated:(id)arg1;
- (void)scheduledDismiss:(id)arg1;
- (void)reset;
- (void)loadEmptyContent;
- (void)loadEmailContent:(id)arg1 header:(id)arg2;
- (void)markContentLayedOut:(id)arg1;
- (void)checkWantsMore;
- (void)repositionScrollViewAfterUpdatingRecipientView:(id)arg1 andLeaveItInCoposeScroll:(BOOL)arg2;
- (void)composeTextViewDidBeginEditing;
- (void)composeTextViewDidEndEditing;
- (void)composeTextViewDidChangeSize;
- (void)refreshReadOnlyRecipients;
- (void)scrollViewDidLayout:(id)arg1;
- (void)addTargetToAttachmentButtonForRowSubject:(id)arg1;
- (void)updateEmailDataAttach;
- (void)didReceiveNewData:(id)arg1;
- (BOOL)containsAttachmentsBlockedForSending;
- (void)reprovisionStarted;
- (void)cleanOnExitingCompose;
- (void)updateEmailHeaderView;
- (void)autosaveDraft:(id)arg1;
- (void)continueForwardingEmail;
- (void)forwardEmail:(id)arg1 withAttachments:(BOOL)arg2;
- (void)continueReplyingToEmail;
- (void)replyToEmail:(id)arg1 all:(BOOL)arg2;
- (void)replyToEmail:(id)arg1 all:(BOOL)arg2 moreThan32Recipients:(BOOL)arg3;
- (void)openDraftEmail:(id)arg1;
- (void)composeEmail;
- (void)continuePresentingEmail;
- (void)presentEmail:(id)arg1;
- (int)getEmailMessageBodyEncryptedStatus:(id)arg1;
- (BOOL)bccCanBeShown;
- (void)back:(id)arg1;
- (void)updateParagraphWidth;
@property(retain, nonatomic) UIToolbar *toolbar;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (id)initWithRootVC:(id)arg1;
- (id)getDefaultAutomationScreenName;

@end

