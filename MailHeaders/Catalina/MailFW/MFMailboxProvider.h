//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailFW/EDMailboxProvider-Protocol.h>

@class MFMailboxTransformer, NSString;
@protocol EDAccountsProvider, EDMailboxProviderDelegate;

@interface MFMailboxProvider : NSObject <EDMailboxProvider>
{
    id <EDMailboxProviderDelegate> delegate;	// 8 = 0x8
    id <EDAccountsProvider> _accountsProvider;	// 16 = 0x10
    MFMailboxTransformer *_mailboxTransformer;	// 24 = 0x18
}

@property(retain, nonatomic) MFMailboxTransformer *mailboxTransformer; // @synthesize mailboxTransformer=_mailboxTransformer;
@property(retain, nonatomic) id <EDAccountsProvider> accountsProvider; // @synthesize accountsProvider=_accountsProvider;
@property(nonatomic) __weak id <EDMailboxProviderDelegate> delegate; // @synthesize delegate;
// - (void).cxx_destruct;	// IMP=0x0000000000170821
- (long long)mailboxTypeForMailboxObjectID:(id)arg1;	// IMP=0x0000000000170773
- (id)mailboxObjectIDsForMailboxType:(long long)arg1;	// IMP=0x0000000000170533
- (id)legacyMailboxForObjectID:(id)arg1;	// IMP=0x00000000001704a7
- (id)mailboxForObjectID:(id)arg1;	// IMP=0x000000000017029d
- (void)_mailboxInvalidated:(id)arg1;	// IMP=0x0000000000170260
- (void)fetchMailboxes;	// IMP=0x00000000001700d0
- (id)allMailboxes;	// IMP=0x000000000016fe2f
- (id)initWithAccountsProvider:(id)arg1;	// IMP=0x000000000016fd41

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

