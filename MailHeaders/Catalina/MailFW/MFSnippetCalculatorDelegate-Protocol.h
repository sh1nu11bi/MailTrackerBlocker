//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/NSObject-Protocol.h>

@class MCMessage, MFSnippetCalculator, NSArray, NSString;

@protocol MFSnippetCalculatorDelegate <NSObject>
- (void)snippetCalculator:(MFSnippetCalculator *)arg1 didSkipMessages:(NSArray *)arg2;
- (void)snippetCalculator:(MFSnippetCalculator *)arg1 didCalculateSnippet:(NSString *)arg2 forMessage:(MCMessage *)arg3;
@end

