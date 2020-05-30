//
//  YHAlertConstant.h
//  YHAlertSDK
//
//  Created by ljt on 2018/11/02.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface YHAlertConstant : NSObject

//-----颜色规范.start-----//

//主色、主灰色
FOUNDATION_EXPORT NSString *YHAlertColorMainHexString;
FOUNDATION_EXPORT NSString *YHAlertColorMainGrayHexString;

FOUNDATION_EXPORT NSString *YHAlertColorMainBgHexString;
FOUNDATION_EXPORT NSString *YHAlertColorTitleBgHexString;
FOUNDATION_EXPORT NSString *YHAlertColorWarmingHexString;

FOUNDATION_EXPORT NSString *YHAlertColorGreenHexString;
FOUNDATION_EXPORT NSString *YHAlertColorGreenGrayHexString;

//toast阴影颜色(如有值则所有状态的Toast都一样)
FOUNDATION_EXPORT NSString *YHToastShadowCustomColorHexString;
//toast圆角
FOUNDATION_EXPORT CGFloat YHToastViewCornerRadius;

//加载中，三个点的颜色
FOUNDATION_EXPORT NSString *YHLoadingLeftSpotColorHexString;
FOUNDATION_EXPORT NSString *YHLoadingMiddleSpotColorHexString;
FOUNDATION_EXPORT NSString *YHLoadingRightSpotColorHexString;

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

//默认
FOUNDATION_EXPORT CGFloat YHAlertDestructiveButtonCornerRadius;
FOUNDATION_EXPORT CGFloat YHAlertCancelButtonCornerRadius;
FOUNDATION_EXPORT CGFloat YHAlertMainViewCornerRadius;

FOUNDATION_EXPORT BOOL YHSVProgressHUD_WORK;
FOUNDATION_EXPORT BOOL YHSVProgressHUDStyleCustom;

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
#define ShowClearLoading(msg)   [YHCommonHUD showClearLoading:msg];
#define YHDismissLoading()      [YHCommonHUD dismissLoading];
#define YHDismissLoadingView    [YHCommonHUD dismissLoading];

@end
