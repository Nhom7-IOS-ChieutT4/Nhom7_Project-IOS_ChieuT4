//
//  ViewDetailViewController.h
//  RSS_READER
//
//  Created by DangHoangDuc on 5/26/21.
//  Copyright © 2021 DangHoangDuc. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ViewDetailViewController : UIViewController
{
    NSString *StrTitleOfNews;
}
@property (weak, nonatomic) IBOutlet UILabel *TitleOfNew;
@property (weak, nonatomic) IBOutlet UIImageView *ImageOfNews;
@property (weak, nonatomic) IBOutlet UILabel *SortContentOfNews;
@property (weak, nonatomic) IBOutlet UIButton *BtnShare;
@property (weak, nonatomic) IBOutlet UIButton *BtnVisitWebsite;
@property (nonatomic) NSMutableDictionary *curren;
@property (nonatomic) NSString *UrlOfNew;
@property (nonatomic) NSString *sortContent;
@property (nonatomic) NSString *UrlImage;
@end

NS_ASSUME_NONNULL_END
