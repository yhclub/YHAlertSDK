//
//  YHCommonHUD.h
//  YHAlertSDK
//
//  Created by Jagtu on 2019/1/9.
//  Copyright © 2019年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YHAlertConstant.h"

@interface YHCommonHUD : NSObject

+(void)showAlert:(NSString *)message;

+(void)showWarmingAlert:(NSString *)message;

+(void)showFailedAlert:(NSString *)message;

+(void)showSuccedAlert:(NSString *)message;

+(void)showLoading:(NSString *)message;

+(void)dismissLoading;

+(void)dismiss;


+(void)showCommonAlert:(NSString *)message afterDelay:(NSTimeInterval)interval wityType:(YHCommonAlertType)type;

@end
