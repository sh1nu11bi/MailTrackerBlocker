//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSPopUpButton;

@interface RichMessageListSortView : NSView
{
    id _target;	// 112 = 0x70
    SEL _clickAction;	// 120 = 0x78
    NSPopUpButton *_sortButton;	// 128 = 0x80
}

@property(nonatomic) __weak NSPopUpButton *sortButton; // @synthesize sortButton=_sortButton;
@property(nonatomic) SEL clickAction; // @synthesize clickAction=_clickAction;
@property(nonatomic) __weak id target; // @synthesize target=_target;
// - (void).cxx_destruct;	// IMP=0x0000000100267589
- (void)mouseDown:(id)arg1;	// IMP=0x0000000100267474
- (void)rightMouseDown:(id)arg1;	// IMP=0x00000001002673a8
- (void)awakeFromNib;	// IMP=0x00000001002671be
- (void)_richMessageListSortViewCommonInit;	// IMP=0x00000001002671a7
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100267148
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100267101

@end

