//
//  NewTableViewCell.h
//  RSS_READER
//
//  Created by DangHoangDuc on 5/26/21.
//  Copyright © 2021 DangHoangDuc. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NewTableViewCell : UITableViewCell{
    NSString *NoiDung;
}
@property (weak, nonatomic) IBOutlet UIImageView *Hinh;
@property (strong, nonatomic) IBOutlet UILabel *NoiDung;
@property (strong, nonatomic) IBOutlet UILabel *ThoiGian;

@end

NS_ASSUME_NONNULL_END
