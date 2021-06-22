//
//  CellObject.h
//  RSS_READER
// 
//  Created by DangHoangDuc on 5/26/21.
//  Copyright © 2021 DangHoangDuc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CellObject : NSObject
@property (strong,nonatomic) NSString *strTitle;
@property (strong,nonatomic) NSString *strTime;
@property (strong,nonatomic) NSString *strDescription;
-(instancetype) initWithDictionary:(NSDictionary *)dic;
@end

