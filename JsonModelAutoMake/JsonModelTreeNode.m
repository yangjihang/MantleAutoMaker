//
//  JsonModelTreeNode.m
//  JsonModelAutoMake
//
//  Created by yangjihang on 14/12/10.
//  Copyright (c) 2014年 yangjihang. All rights reserved.
//

#import "JsonModelTreeNode.h"

@implementation JsonModelTreeNode

- (NSMutableArray *)subContentNodes {
    if (nil == _subContentNodes) {
        _subContentNodes = [NSMutableArray array];
    }
    return _subContentNodes;
}

- (id)initNodeWithFatherNode:(JsonModelTreeNode *)fatherNode
{
    if (self = [super init]) {
        self.fatherNode = fatherNode;
    }
    return self;
}

@end
