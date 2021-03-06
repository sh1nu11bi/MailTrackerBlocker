//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/MFEWSGateway.h>

#import <MailFW/NSKeyedUnarchiverDelegate-Protocol.h>

@class MFEWSConnection, MFEWSResponseOperation, NSMutableDictionary, NSOperationQueue, NSString;

@interface MFEWSOfflineGateway : MFEWSGateway <NSKeyedUnarchiverDelegate>
{
    NSMutableDictionary *_offlineToRealEWSIdStrings;	// 8 = 0x8
    id _offlineToRealEWSIdStringsLock;	// 16 = 0x10
    NSOperationQueue *_requestResponseQueue;	// 24 = 0x18
    MFEWSConnection *_offlineConnection;	// 32 = 0x20
    MFEWSResponseOperation *_lastResponseDecoded;	// 40 = 0x28
}

+ (BOOL)supportsSecureCoding;	// IMP=0x00000000000979f5
+ (id)keyPathsForValuesAffectingRequestResponseQueue;	// IMP=0x00000000000979dc
@property(retain) MFEWSResponseOperation *lastResponseDecoded; // @synthesize lastResponseDecoded=_lastResponseDecoded;
@property(retain) MFEWSConnection *offlineConnection; // @synthesize offlineConnection=_offlineConnection;
- (id)requestResponseQueue;	// IMP=0x000000000009a021
// - (void).cxx_destruct;	// IMP=0x000000000009a080
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;	// IMP=0x0000000000099f80
- (id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;	// IMP=0x0000000000099ea6
- (void)_undeleteMessagesFromFailedDeleteRequest:(id)arg1;	// IMP=0x0000000000099bc8
- (void)_undeleteMessagesFromFailedCopyRequest:(id)arg1;	// IMP=0x0000000000099837
- (void)_moveMessageFromFailedCreateRequest:(id)arg1 withBackupManager:(id)arg2 toMailboxNamed:(id)arg3 actualName:(id *)arg4;	// IMP=0x00000000000994fd
- (id)_deleteRequestRemovingUndeletedItems:(id)arg1;	// IMP=0x00000000000990a0
- (id)_EWSFolderFromCreateRequestOperation:(id)arg1;	// IMP=0x0000000000098f4e
@property(retain, nonatomic) NSMutableDictionary *offlineToRealEWSIdStrings;
- (id)playbackRequests:(id)arg1 offlineToRealEWSIdStrings:(id *)arg2 error:(id *)arg3;	// IMP=0x0000000000097d21
- (void)takeRequestOffline:(id)arg1 error:(id)arg2;	// IMP=0x0000000000097c99
- (void)addOfflineToRealEWSIdStrings:(id)arg1 forRequest:(id)arg2;	// IMP=0x0000000000097ba8
- (id)resolvedIdStringForIdString:(id)arg1;	// IMP=0x0000000000097acb
- (void)addRequest:(id)arg1;	// IMP=0x0000000000097a12
- (id)connection;	// IMP=0x0000000000097a00
- (id)initWithAccount:(id)arg1;	// IMP=0x000000000009790d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000978de
- (id)initWithAccount:(id)arg1 connection:(id)arg2;	// IMP=0x00000000000977b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

