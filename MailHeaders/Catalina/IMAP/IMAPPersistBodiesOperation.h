//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPPersistenceTaskOperation.h>

@class NSOrderedSet;
@protocol IMAPPersistBodiesOperationDelegate;

@interface IMAPPersistBodiesOperation : IMAPPersistenceTaskOperation
{
    NSOrderedSet *_downloads;	// 8 = 0x8
    id <IMAPPersistBodiesOperationDelegate> _delegate;	// 16 = 0x10
}

@property(readonly, nonatomic) __weak id <IMAPPersistBodiesOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSOrderedSet *downloads; // @synthesize downloads=_downloads;
- (void).cxx_destruct;	// IMP=0x000000000004be35
- (void)main;	// IMP=0x000000000004b7b3
- (id)description;	// IMP=0x000000000004b719
- (id)initWithDataSource:(id)arg1;	// IMP=0x000000000004b64a
- (id)initWithDownloads:(id)arg1 dataSource:(id)arg2 delegate:(id)arg3;	// IMP=0x000000000004b57b

@end

