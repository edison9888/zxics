//
//  arrearagecheck.h
//  zxics
//
//  Created by johnson on 14-8-7.
//  Copyright (c) 2014年 moko. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "arrearageCell.h"
#import "arrearageDetail.h"

@interface arrearagecheck : UIViewController

@property(retain , nonatomic) NSString * btntag;//缴费欠费

@property (weak, nonatomic) IBOutlet UINavigationBar *UINavigationBar;
@property (weak, nonatomic) IBOutlet UINavigationItem *UINavigationItem;
@end
