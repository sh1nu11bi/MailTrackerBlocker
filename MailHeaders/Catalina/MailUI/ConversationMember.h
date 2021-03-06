//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class Conversation, ECAngleBracketIDHash, MCMessage, MCMessageHeaders, MUIWebDocument, NSArray, NSDate, NSIndexSet, NSMutableArray, NSMutableSet, NSOperationQueue, NSString, SGFoundInSuggestionPresenter, WebDocumentGenerator;

@interface ConversationMember : NSObject <NSCopying>
{
    NSMutableSet *_primitiveMessages;	// 8 = 0x8
    NSMutableSet *_primaryMessages;	// 16 = 0x10
    NSMutableSet *_hiddenMessages;	// 24 = 0x18
    NSMutableArray *_asyncLoadCompletionHandlers;	// 32 = 0x20
    BOOL _isPrimary;	// 40 = 0x28
    BOOL _isDeleted;	// 41 = 0x29
    MCMessage *_originalMessage;	// 48 = 0x30
    BOOL _senderIsVIP;	// 56 = 0x38
    int _conversationPosition;	// 60 = 0x3c
    BOOL _primitiveIsUnread;	// 64 = 0x40
    BOOL _primitiveIsFlagged;	// 65 = 0x41
    NSIndexSet *_primitiveFlagColors;	// 72 = 0x48
    long long _primitiveJunkStatus;	// 80 = 0x50
    MUIWebDocument *_webDocument;	// 88 = 0x58
    WebDocumentGenerator *_documentGenerator;	// 96 = 0x60
    BOOL _messageDataCached;	// 104 = 0x68
    BOOL _inJunkMailbox;	// 105 = 0x69
    BOOL _isBlocked;	// 106 = 0x6a
    BOOL _showSuggestionBanner;	// 107 = 0x6b
    BOOL _startedLoad;	// 108 = 0x6c
    BOOL _registeredForNotifications;	// 109 = 0x6d
    BOOL _allowBlockedMessageContentOverride;	// 110 = 0x6e
    Conversation *_conversation;	// 112 = 0x70
    NSString *_messageURLString;	// 120 = 0x78
    MCMessageHeaders *_headers;	// 128 = 0x80
    NSArray *_messages;	// 136 = 0x88
    SGFoundInSuggestionPresenter *_suggestionPresenter;	// 144 = 0x90
    NSOperationQueue *_suggestionsQueue;	// 152 = 0x98
}

+ (id)keyPathsForValuesAffectingHasBlockedMessageContent;	// IMP=0x0000000100112ad2
+ (id)keyPathsForValuesAffectingJunkStatus;	// IMP=0x000000010003c39e
+ (id)keyPathsForValuesAffectingFlagColors;	// IMP=0x000000010003aaeb
+ (id)keyPathsForValuesAffectingIsFlagged;	// IMP=0x000000010003ab0b
+ (id)keyPathsForValuesAffectingIsUnread;	// IMP=0x000000010003ad9a
+ (BOOL)automaticallyNotifiesObserversOfPrimitiveJunkStatus;	// IMP=0x0000000100111233
+ (BOOL)automaticallyNotifiesObserversOfPrimitiveFlagColors;	// IMP=0x000000010011122b
+ (BOOL)automaticallyNotifiesObserversOfPrimitiveIsFlagged;	// IMP=0x0000000100111223
+ (BOOL)automaticallyNotifiesObserversOfPrimitiveIsUnread;	// IMP=0x000000010011121b
+ (id)keyPathsForValuesAffectingMemberIndex;	// IMP=0x0000000100111187
+ (BOOL)automaticallyNotifiesObserversOfConversationPosition;	// IMP=0x000000010011117f
+ (BOOL)automaticallyNotifiesObserversOfSenderIsVIP;	// IMP=0x0000000100111177
+ (BOOL)automaticallyNotifiesObserversOfOriginalMessage;	// IMP=0x000000010011116f
+ (BOOL)automaticallyNotifiesObserversOfIsDeleted;	// IMP=0x0000000100111167
+ (BOOL)automaticallyNotifiesObserversOfIsPrimary;	// IMP=0x000000010011115f
+ (id)keyPathsForValuesAffectingSignerNames;	// IMP=0x0000000100111017
+ (id)keyPathsForValuesAffectingSigners;	// IMP=0x0000000100110ecf
+ (id)keyPathsForValuesAffectingIsSigned;	// IMP=0x0000000100110eaf
+ (id)keyPathsForValuesAffectingIsEncrypted;	// IMP=0x0000000100110e8f
+ (id)keyPathsForValuesAffectingAttachmentSize;	// IMP=0x0000000100110e6f
+ (id)keyPathsForValuesAffectingNumberOfAttachments;	// IMP=0x000000010003a0ca
+ (id)keyPathsForValuesAffectingMailboxName;	// IMP=0x000000010003adba
+ (id)keyPathsForValuesAffectingDateReceived;	// IMP=0x000000010003aacb
+ (id)keyPathsForValuesAffectingSubject;	// IMP=0x0000000100110d1d
+ (id)keyPathsForValuesAffectingSubjectWithoutPrefix;	// IMP=0x0000000100110c2f
+ (id)keyPathsForValuesAffectingBccRecipients;	// IMP=0x0000000100110add
+ (id)keyPathsForValuesAffectingCcRecipients;	// IMP=0x000000010011098b
+ (id)keyPathsForValuesAffectingToRecipients;	// IMP=0x0000000100110839
+ (id)keyPathsForValuesAffectingSender;	// IMP=0x0000000100110819
+ (id)keyPathsForValuesAffectingMessageIDHeaderHash;	// IMP=0x00000001001107f9
+ (id)flagsAffectingConversationMember;	// IMP=0x00000001000488cd
+ (id)presenterPool;	// IMP=0x000000010010f2e4
@property(nonatomic) BOOL allowBlockedMessageContentOverride; // @synthesize allowBlockedMessageContentOverride=_allowBlockedMessageContentOverride;
@property(nonatomic) BOOL registeredForNotifications; // @synthesize registeredForNotifications=_registeredForNotifications;
@property(nonatomic) BOOL startedLoad; // @synthesize startedLoad=_startedLoad;
@property(readonly, nonatomic) NSOperationQueue *suggestionsQueue; // @synthesize suggestionsQueue=_suggestionsQueue;
@property(nonatomic) BOOL showSuggestionBanner; // @synthesize showSuggestionBanner=_showSuggestionBanner;
@property(readonly, nonatomic) SGFoundInSuggestionPresenter *suggestionPresenter; // @synthesize suggestionPresenter=_suggestionPresenter;
@property(copy, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(nonatomic) BOOL isBlocked; // @synthesize isBlocked=_isBlocked;
@property(nonatomic) BOOL inJunkMailbox; // @synthesize inJunkMailbox=_inJunkMailbox;
@property(retain, nonatomic) MCMessageHeaders *headers; // @synthesize headers=_headers;
@property(copy, nonatomic) NSString *messageURLString; // @synthesize messageURLString=_messageURLString;
@property(nonatomic) BOOL messageDataCached; // @synthesize messageDataCached=_messageDataCached;
@property(nonatomic) __weak Conversation *conversation; // @synthesize conversation=_conversation;
// - (void).cxx_destruct;	// IMP=0x000000010011315a
- (void)reloadSenderIsBlocked;	// IMP=0x0000000100112f0c
- (void)_reloadDocumentAllowingBlockedMessageContentIfNeeded;	// IMP=0x0000000100112ed9
- (void)_reevaluateTrustWithNetworkAccessAllowedIfNeeded;	// IMP=0x0000000100112ccb
- (id)_trustEvaluation;	// IMP=0x0000000100112bc2
- (void)loadBlockedContent;	// IMP=0x0000000100112b94
@property(readonly, nonatomic) BOOL hasBlockedMessageContent;
@property(readonly, nonatomic) long long messageContentBlockingReason;
@property(readonly, nonatomic) long long messageContentTypeToBlock;
- (void)updateWebDocumentMessageContentTypeToBlock;	// IMP=0x0000000100112827
@property(readonly, copy, nonatomic) NSArray *messagesForFlagState;
@property(readonly, copy, nonatomic) NSArray *messagesInSameMailboxAsOriginalMessage;
- (BOOL)isPrimaryMessage:(id)arg1;	// IMP=0x0000000100069539
- (void)unhideMessage:(id)arg1;	// IMP=0x000000010011252e
- (void)hideMessage:(id)arg1;	// IMP=0x0000000100112335
- (void)removeMessage:(id)arg1;	// IMP=0x000000010006a429
- (void)addMessage:(id)arg1 isPrimary:(BOOL)arg2;	// IMP=0x000000010004948f
- (id)_preferredOriginalMessage;	// IMP=0x0000000100033dcb
- (void)_reloadOriginalMessage;	// IMP=0x000000010005edce
- (BOOL)_messageIsInSent:(id)arg1;	// IMP=0x00000001000479b3
- (BOOL)_messageIsInTrashJunkOrOutbox:(id)arg1;	// IMP=0x0000000100033d71
- (BOOL)_messageIsDeleted:(id)arg1;	// IMP=0x0000000100033d05
- (BOOL)_shouldDisplayMessage:(id)arg1;	// IMP=0x0000000100033c44
- (void)markAsPrinted;	// IMP=0x0000000100112220
- (void)updateLastViewedDate;	// IMP=0x00000001001120cf
- (void)_reloadSenderIsVIP;	// IMP=0x000000010003f3ec
- (void)_VIPSendersDidChange:(id)arg1;	// IMP=0x000000010007d30d
- (void)_reloadValuesForAggregateFlags;	// IMP=0x000000010003ed3d
- (void)persistenceConversationFlagsChanged:(unsigned long long)arg1;	// IMP=0x0000000100111fa1
- (void)flagsChangedForMessage:(id)arg1;	// IMP=0x0000000100069d6d
@property(nonatomic) long long junkStatus;
@property(copy, nonatomic) NSIndexSet *flagColors;
@property(nonatomic) BOOL isFlagged;
@property(nonatomic) BOOL isUnread;
- (id)_unsubscribeSuggestionForMessage:(id)arg1;	// IMP=0x0000000100111829
- (void)_asyncAddSuggestionsToPresenterWithMessage:(id)arg1 htmlString:(id)arg2;	// IMP=0x0000000100111395
- (void)_sharedPreferencesDidChange:(id)arg1;	// IMP=0x0000000100111383
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010011123b
@property(nonatomic) long long primitiveJunkStatus;
@property(copy, nonatomic) NSIndexSet *primitiveFlagColors;
@property(nonatomic) BOOL primitiveIsFlagged;
@property(nonatomic) BOOL primitiveIsUnread;
@property(readonly, nonatomic) unsigned long long memberIndex;
@property(nonatomic) int conversationPosition;
@property(nonatomic) BOOL senderIsVIP;
@property(retain, nonatomic) MCMessage *originalMessage;
@property(nonatomic) BOOL isDeleted;
@property(nonatomic) BOOL isPrimary;
@property(readonly, nonatomic) NSArray *signerNames;
@property(readonly, nonatomic) NSArray *signers;
@property(readonly, nonatomic) BOOL isSigned;
@property(readonly, nonatomic) BOOL isEncrypted;
@property(readonly, nonatomic) unsigned long long attachmentSize;
@property(readonly, nonatomic) unsigned long long numberOfAttachments;
@property(readonly, copy, nonatomic) NSString *mailboxName;
@property(readonly, nonatomic) NSDate *dateReceived;
@property(readonly, copy, nonatomic) NSString *subject;
@property(readonly, copy, nonatomic) NSString *subjectWithoutPrefix;
@property(readonly, copy, nonatomic) NSArray *bccRecipients;
@property(readonly, copy, nonatomic) NSArray *ccRecipients;
@property(readonly, copy, nonatomic) NSArray *toRecipients;
@property(readonly, copy, nonatomic) NSString *sender;
@property(readonly, nonatomic) ECAngleBracketIDHash *messageIDHeaderHash;
@property(retain, nonatomic) MUIWebDocument *webDocument;
@property(retain, nonatomic) WebDocumentGenerator *documentGenerator;
- (void)cancelLoad;	// IMP=0x0000000100047b92
- (void)reloadSuggestionsInPresenter;	// IMP=0x000000010011054e
- (void)asyncLoadAllowingRemoteFetch:(BOOL)arg1 completionHandler:(id)arg2;	// IMP=0x000000010010fd81
- (void)invalidate;	// IMP=0x000000010004913c
- (id)debugDescription;	// IMP=0x000000010010fa0c
- (id)description;	// IMP=0x000000010010f938
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010010f92d
- (void)_setTemporaryHeaders;	// IMP=0x000000010010f77b
- (void)dealloc;	// IMP=0x000000010004923f
- (id)initWithMessages:(id)arg1 primaryMessages:(id)arg2 forConversation:(id)arg3;	// IMP=0x00000001000336db
- (id)initWithMessage:(id)arg1 isPrimary:(BOOL)arg2 forConversation:(id)arg3;	// IMP=0x000000010010f5a7
- (id)init;	// IMP=0x000000010010f4d8

@end

