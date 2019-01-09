//
//  YHCommonHUD.h
//  YHAlertSDK
//
//  Created by Jagtu on 2019/1/9.
//  Copyright © 2019年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>

#define ShowMsg(msg)            [YHCommonHUD showAlert:msg];
#define showWarmingAlert(msg)   [YHCommonHUD showWarmingAlert:msg];
#define ShowFailedMsg(msg)      [YHCommonHUD showFailedAlert:msg];
#define ShowSuccessedMsg(msg)   [YHCommonHUD showSuccedAlert:msg];

#define ShowLoading(msg)        [YHCommonHUD showLoading:msg];
#define YHDismissLoadingView    [YHCommonHUD dismiss];

typedef NS_ENUM(NSInteger, YHCommonAlertType) {
    YHCommonAlertTypeDefault = 0,//Toast
    YHCommonAlertTypeLoading = 1,//加载中
    YHCommonAlertTypeSuccess = 2,//成功提示框
    YHCommonAlertTypeFailed  = 3,//错误提示框
    YHCommonAlertTypeWarming = 4 //警告提示框
};

@interface YHCommonHUD : NSObject

+(void)showAlert:(NSString *)message;

+(void)showWarmingAlert:(NSString *)message;

+(void)showFailedAlert:(NSString *)message;

+(void)showSuccedAlert:(NSString *)message;

+(void)showLoading:(NSString *)message;

+(void)dismiss;


+(void)showCommonAlert:(NSString *)message afterDelay:(NSTimeInterval)interval wityType:(YHCommonAlertType)type;

@end
