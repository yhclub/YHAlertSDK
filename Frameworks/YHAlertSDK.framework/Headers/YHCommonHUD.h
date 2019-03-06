//
//  YHCommonHUD.h
//  YHAlertSDK
//
//  Created by Jagtu on 2019/1/9.
//  Copyright © 2019年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YHAlertConstant.h"

typedef NS_ENUM(NSUInteger, YHCommonHUDMaskType) {
    YHCommonHUDMaskTypeNone = 1,  // default mask type, allow user interactions while HUD is displayed
    YHCommonHUDMaskTypeClear,     // don't allow user interactions with background objects
    YHCommonHUDMaskTypeBlack
};

@interface YHCommonHUD : NSObject

+(void)showAlert:(NSString *)message;

+(void)showWarmingAlert:(NSString *)message;

+(void)showFailedAlert:(NSString *)message;

+(void)showSuccedAlert:(NSString *)message;

+(void)showLoading:(NSString *)message;

+(void)showClearLoading:(NSString *)message;

+(void)dismissLoading;

+(void)dismiss;

+(void)setDefaultMaskType:(YHCommonHUDMaskType)maskType;

+(void)showCommonAlert:(NSString *)message afterDelay:(NSTimeInterval)interval wityType:(YHCommonAlertType)type;

+(NSTimeInterval)getTimeIntervalByWordCount:(NSInteger)count;

@end
