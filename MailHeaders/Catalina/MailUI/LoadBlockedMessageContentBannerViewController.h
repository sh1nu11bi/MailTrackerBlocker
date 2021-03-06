//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BannerViewController.h"

@class NSButton, NSImageView, NSLayoutConstraint, NSTextField;

@interface LoadBlockedMessageContentBannerViewController : BannerViewController
{
    NSButton *_loadBlockedMessageContentButton;	// 16 = 0x10
    NSLayoutConstraint *_messageFieldToLoadBlockedContentButtonHorizontalSpacing;	// 24 = 0x18
    NSImageView *_icon;	// 32 = 0x20
    NSTextField *_messageField;	// 40 = 0x28
}

@property(nonatomic) __weak NSTextField *messageField; // @synthesize messageField=_messageField;
@property(nonatomic) __weak NSImageView *icon; // @synthesize icon=_icon;
@property(nonatomic) __weak NSLayoutConstraint *messageFieldToLoadBlockedContentButtonHorizontalSpacing; // @synthesize messageFieldToLoadBlockedContentButtonHorizontalSpacing=_messageFieldToLoadBlockedContentButtonHorizontalSpacing;
@property(nonatomic) __weak NSButton *loadBlockedMessageContentButton; // @synthesize loadBlockedMessageContentButton=_loadBlockedMessageContentButton;
// - (void).cxx_destruct;	// IMP=0x0000000100193ad6
- (void)loadBlockedMessageContent:(id)arg1;	// IMP=0x00000001001939e5
- (void)updateWantsDisplay;	// IMP=0x000000010019398c
- (void)updateBannerContents;	// IMP=0x0000000100193685
- (void)_hasBlockedMessageContentDidChange:(BOOL)arg1;	// IMP=0x0000000100193536
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001001933de
- (void)setRepresentedObject:(id)arg1;	// IMP=0x0000000100193313
@property(readonly, nonatomic) BOOL shouldDisplayToLoadBlockedContent;
- (void)dealloc;	// IMP=0x000000010019328c

@end

