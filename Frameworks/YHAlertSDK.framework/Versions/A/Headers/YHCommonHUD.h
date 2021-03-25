//
//  YHCommonHUD.h
//  YHAlertSDK
//
//  Created by Jagtu on 2019/1/9.
//  Copyright © 2019年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YHCommonHUD : NSObject

+(void)showAlert:(NSString *)message;

+(void)showWarmingAlert:(NSString *)message;

+(void)showFailedAlert:(NSString *)message;

+(void)showSuccedAlert:(NSString *)message;

//使用默认配置加载框(YHCommonHUDMaskTypeNone,不影响默认配置)
+(void)showLoading:(NSString *)message;

//加载框模式（YHCommonHUDMaskTypeClear(默认) or YHCommonHUDMaskTypeBlack,不影响默认配置）
+(void)showClearLoading:(NSString *)message;

+(void)dismissLoading;

+(void)dismiss;

//设置之前已显示的toast不生效
+(void)setDefaultMaskType:(YHCommonHUDMaskType)maskType;
+(void)setDefaultLayoutType:(YHAlertLayoutType)layoutType;
+(void)setDefaultStyleType:(YHLoadingStyleType)styleType;


+(void)showCommonAlert:(NSString *)message afterDelay:(NSTimeInterval)interval wityType:(YHCommonAlertType)type;

+(NSTimeInterval)getTimeIntervalByWordCount:(NSInteger)count;

@end
