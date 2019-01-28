//
//  YHAlertConstant.h
//  YHAlertSDK
//
//  Created by ljt on 2018/11/02.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define YHISIMPORTSVP  0

@interface YHAlertConstant : NSObject

//-----颜色规范.start-----//

//主色、主灰色
FOUNDATION_EXPORT NSString *YHAlertColorMainHexString;
FOUNDATION_EXPORT NSString *YHAlertColorMainGrayHexString;

FOUNDATION_EXPORT NSString *YHAlertColorMainBgHexString;
FOUNDATION_EXPORT NSString *YHAlertColorTitleBgHexString;
FOUNDATION_EXPORT NSString *YHAlertColorWarmingHexString;

FOUNDATION_EXPORT NSString *YHAlertColorSecondaryHexString;
FOUNDATION_EXPORT NSString *YHAlertColorSecondaryGrayHexString;

//按钮颜色辅色
FOUNDATION_EXPORT NSString *YHAlertColorDestructiveHexString;
FOUNDATION_EXPORT NSString *YHAlertColorDestructiveBgHexString;

FOUNDATION_EXPORT NSString *YHAlertColorCancelHexString;
FOUNDATION_EXPORT NSString *YHAlertColorCancelBgHexString;

FOUNDATION_EXPORT NSString *YHAlertTextColorBlackHexString;
FOUNDATION_EXPORT NSString *YHAlertTextColorGrayHexString;
FOUNDATION_EXPORT NSString *YHAlertTextColorLightGrayHexString;
FOUNDATION_EXPORT NSString *YHAlertTextColorWhiteHexString;

FOUNDATION_EXPORT NSString *YHAlertErrorImageNameString;
FOUNDATION_EXPORT NSString *YHAlertSuccessImageNameString;

//默认toast持续时长2.2秒
FOUNDATION_EXPORT CGFloat YHCommonAlertDurationDefault;
FOUNDATION_EXPORT CGFloat YHCommonAlertDurationLoading;//加载中..120s
FOUNDATION_EXPORT CGFloat YHCommonAlertDurationSuccess;//成功提示框
FOUNDATION_EXPORT CGFloat YHCommonAlertDurationFailed;//错误提示框
FOUNDATION_EXPORT CGFloat YHCommonAlertDurationWarming;//警告提示框

typedef NS_ENUM(NSInteger, YHCommonAlertType) {
    YHCommonAlertTypeDefault = 0,//Toast
    YHCommonAlertTypeLoading = 1,//加载中
    YHCommonAlertTypeSuccess = 2,//成功提示框
    YHCommonAlertTypeFailed  = 3,//错误提示框
    YHCommonAlertTypeWarming = 4 //警告提示框
};

#define ShowMsg(msg)            [YHCommonHUD showAlert:msg];
#define ShowWarmingAlert(msg)   [YHCommonHUD showWarmingAlert:msg];
#define ShowFailedMsg(msg)      [YHCommonHUD showFailedAlert:msg];
#define ShowSuccessedMsg(msg)   [YHCommonHUD showSuccedAlert:msg];

#define ShowLoading(msg)        [YHCommonHUD showLoading:msg];
#define YHDismissLoading()      [YHCommonHUD dismissLoading];
#define YHDismissLoadingView    [YHCommonHUD dismissLoading];

@end
