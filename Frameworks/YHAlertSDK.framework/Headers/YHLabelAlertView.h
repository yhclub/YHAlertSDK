//
//  YHLabelAlertView.h
//  YHAlertSDK
//
//  Created by zxl on 2018/3/20.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, YHLabelAlertType) {
    YHLabelAlertTypeBlue = 0,//蓝
    YHLabelAlertTypePink = 1,//粉
    YHLabelAlertTypeGreen = 2//绿
};

@interface YHLabelAlertView : UIView

@property(nonatomic,assign)YHLabelAlertType type;//样式类型

@property(nonatomic,copy)NSString *text;//普通文本

@property(nonatomic,strong)NSMutableAttributedString *attributeText;//消息富文本



/**
 单例

 @return id
 */
+ (id)sharedInstance;

/**
 初始化普通文本

 @param text 普通文本
 @return id
 */
-(id)initWithText:(NSString *)text;

/**
 初始化富文本

 @param attributeText 富文本
 @return id
 */
-(id)initWithAttributeText:(NSMutableAttributedString *)attributeText;


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
 隐藏
 */
-(void)dismissView;


/**
 延迟隐藏掉

 @param interval 秒
 */
-(void)dismissViewAfterDelay:(NSTimeInterval)interval;
@end
