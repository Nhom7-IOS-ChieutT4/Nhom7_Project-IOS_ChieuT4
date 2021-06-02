//
//  CellObject.m
//  RSS_READER
//
//  Created by DoKhanhNguyen on 5/26/21.
//  Copyright © 2021 DoKhanhNguyen. All rights reserved.
//

#import "CellObject.h"
//#import "BookMarkViewController.h"
@implementation CellObject
- (instancetype)initWithDictionary:(NSDictionary *)dic{
    self.strTitle = [dic objectForKey:@"title"];
    self.strDescription = [dic objectForKey:@"description"];
    self.strTime = [dic objectForKey:@"pubDate"];
    return self;
}
@end
