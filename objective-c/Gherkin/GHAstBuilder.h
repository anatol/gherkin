﻿#import "GHAstNode.h"

@protocol GHAstBuilderProtocol;
@class GHToken;

@interface GHAstBuilder<GHAstBuilderProtocol> : NSObject

- (id)init;
- (void)reset;
- (void)buildWithToken:(GHToken *)theToken;
- (void)startRuleWithType:(GHRuleType)theRuleType;
- (void)endRuleWithType:(GHRuleType)theRuleType;

@end