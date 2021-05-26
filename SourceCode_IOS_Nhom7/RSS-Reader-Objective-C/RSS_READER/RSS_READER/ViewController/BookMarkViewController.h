//
//  BookMarkViewController.h
//  RSS_READER
//
//  Created by DangHoangDuc on 5/26/21.
//  Copyright © 2021 DangHoangDuc. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BookMarkViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>
@property(strong,nonatomic) NSMutableArray *arrayData;



@end

NS_ASSUME_NONNULL_END
