//
//  YHLabelAlertView.h
//  YHAlertSDK
//
//  Created by zxl on 2018/3/20.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YHAlertConstant.h"


typedef NS_ENUM(NSInteger, YHLabelAlertType) {
    YHLabelAlertTypeBlue = 0,//蓝 提示色
    YHLabelAlertTypePink = 1,//粉 警示色
    YHLabelAlertTypeGreen = 2//绿
};

@interface YHLabelAlertView : UIView

@property(nonatomic,assign)YHLabelAlertType type;//样式类型

@property(nonatomic,copy)NSString *text;//普通文本

@property(nonatomic,strong)NSMutableAttributedString *attributeText;//消息富文本

@property(nonatomic,assign)BOOL isShow;

@property(nonatomic,assign)BOOL isLoading;//加载中..

@property(nonatomic,copy)NSString *leftImageName;//左边logo图标

/**
 单例

 @return id
 */
+ (instancetype)sharedInstance;

//自定义
+(void)showCommonAlert:(NSString *)message afterDelay:(NSTimeInterval)interval wityType:(YHCommonAlertType)type;

/**
 刷新界面, 设置text、type后必须调用
 刷新后默认isLoading=NO
 */
-(void)refreshView;


/**
 显示在window
 */
-(void)showView;

/**
 显示在指定视图
 
 @param superview 指定视图
 */
-(void)showViewInSuperview:(UIView *)superview;

/**
 延迟隐藏掉
 @param interval 秒
 */
-(void)dismissViewAfterDelay:(NSTimeInterval)interval;

/**
 直接隐藏
 */
-(void)dismissView;



@end
