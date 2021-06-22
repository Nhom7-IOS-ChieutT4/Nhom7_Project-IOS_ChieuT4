//
//  SaveNewsViewController.h
//  RSS_READER
//
//  Created by DangHoangDuc on 5/26/21.
//  Copyright © 2021 DangHoangDuc. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SaveNewsViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>

+(void)ReadData;
+(void)SaveData;
+(void)AddNewsToDownloadPlist:(NSDictionary *)dic;
@end

NS_ASSUME_NONNULL_END