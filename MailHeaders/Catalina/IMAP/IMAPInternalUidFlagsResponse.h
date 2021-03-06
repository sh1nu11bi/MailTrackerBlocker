//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPResponse.h>

@class IMAPFlagsFetchResult, NSIndexSet;

@interface IMAPInternalUidFlagsResponse : IMAPResponse
{
    BOOL _flagChangeType;	// 8 = 0x8
    NSIndexSet *_uids;	// 16 = 0x10
    IMAPFlagsFetchResult *_flagsFetchResult;	// 24 = 0x18
}

@property(nonatomic) BOOL flagChangeType; // @synthesize flagChangeType=_flagChangeType;
@property(retain, nonatomic) IMAPFlagsFetchResult *flagsFetchResult; // @synthesize flagsFetchResult=_flagsFetchResult;
@property(copy, nonatomic) NSIndexSet *uids; // @synthesize uids=_uids;
- (void).cxx_destruct;	// IMP=0x00000000000153f3
- (id)description;	// IMP=0x00000000000332fe

@end

