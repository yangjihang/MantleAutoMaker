//
//  JsonModelTreeNode.h
//  JsonModelAutoMake
//
//  Created by yangjihang on 14/12/10.
//  Copyright (c) 2014年 yangjihang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JsonModelTreeNode : NSObject

/*
 *  举例：
 
 {
    "status": {
        "code": 0,
        "msg": ""
    },
    "data": {
        "conf": {
            "cover_zip": "http://img.baidu.com/img/iknow/wenku/iphone_1212.zip",
            "version": "17"
        },
        "time": 1421477816
    }
 }
 
 *  @property(nonatomic, strong) NSString *data_conf_version;
 *  
 *  此时  objPathInDictionary为    data.conf.version
 *        objPropertyName为    data_conf_version
 *        objTypeName为       NSString
 */

@property(nonatomic, strong) NSString *objPathInDictionary;
@property(nonatomic, strong) NSString *objPropertyName;
@property(nonatomic, strong) NSString *objTypeName;

@property(nonatomic, strong) NSMutableArray *subContentNodes;
@property(nonatomic, weak) JsonModelTreeNode *fatherNode;

- (id)initNodeWithFatherNode:(JsonModelTreeNode *)fatherNode;

@end
