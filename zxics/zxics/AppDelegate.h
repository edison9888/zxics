//
//  AppDelegate.h
//  zxics
//
//  Created by moko on 14-8-1.
//  Copyright (c) 2014年 moko. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FileHelpers.h"
#import "LoginEntity.h"
#import "login.h"
#import "fontindex.h"
#import "ASIFormDataRequest.h"
#import "showAD.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property(retain , nonatomic) LoginEntity * entityl;//保存登录的用户信息

@property (strong, nonatomic) UIAlertView *alter;//弹出提示框

@property (nonatomic,assign) id <UIApplicationDelegate> mydelegate;

//上传图片到服务器
-(BOOL*)submitOrder:(NSString *)gid  uploadpath:(NSMutableArray *)uploadpath URL:(NSString *)URL  postid:(NSString *)postid;


@end
