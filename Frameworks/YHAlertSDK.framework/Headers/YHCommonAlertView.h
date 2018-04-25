//
//  YHCommonAlertView.h
//  YHRongYiTong
//
//  Created by zxl on 2017/11/13.
//  Copyright © 2017年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define ShowLoading(msg) [YHCommonAlertView showLoading:msg];
#define ShowMsg(msg) [YHCommonAlertView showAlert:msg];
#define ShowFailedMsg(msg) [YHCommonAlertView showFailedAlert:msg];
#define ShowSuccessedMsg(msg) [YHCommonAlertView showSuccedAlert:msg];
#define YHDismissLoadingView [YHCommonAlertView dismiss];

typedef NS_ENUM(NSInteger, YHCommonAlertType) {
    YHCommonAlertTypeDefault = 0,//Toast
    YHCommonAlertTypeLoading = 1,//加载中
    YHCommonAlertTypeSuccess = 2,//成功提示框
    YHCommonAlertTypeFailed  = 3,//错误提示框
    YHCommonAlertTypeWarming = 4 //警告提示框
};

typedef NS_ENUM(NSInteger, YHCommonAnimationType)
{
    YHCommonAnimationTypeDefault = 0,//无动画
    YHCommonAnimationTypeDown = 1,//下坠效果
    YHCommonAnimationTypeFromLeft = 2,//从左进入
    YHCommonAnimationTypeFromRight  = 3,//从右进入
    YHCommonAnimationTypeFromTop = 4, //从上进入
    YHCommonAnimationTypeFromDown = 5 //从下
};

@class YHCommonAlertView;

@protocol YHCommonAlertviewDelegate <NSObject>
    
@optional
- (void)commonAlertView:(YHCommonAlertView *)commonAlertView clickedButtonAtIndex:(NSInteger)buttonIndex;

/**
 自定义中间视图

 @param commonAlertView 定义中间视图
 @return 定义中间视图
 */
- (UIView *)middleViewInCommonAlertView:(YHCommonAlertView *)commonAlertView;


/**
 获取中间视图的高度

 @param commonAlertView
 @return height
 */
-(CGFloat)heightForMiddleViewInCommonAlertView:(YHCommonAlertView *)commonAlertView;

@end

typedef void(^YHBtnIndexBlock)(NSInteger buttonIndex);

@interface YHCommonAlertView : UIView <UITextFieldDelegate>

+(void)showCommonAlert:(NSString *)message afterDelay:(NSTimeInterval)interval wityType:(YHCommonAlertType)type;
    
+(void)showAlert:(NSString *)message;
    
+(void)showFailedAlert:(NSString *)message;
    
+(void)showSuccedAlert:(NSString *)message;
    
+(void)showLoading:(NSString *)message;
    
+(void)dismiss;
    
#pragma mark init commonalertview

@property(nonatomic,strong)UIView *middleView;
    
@property(nonatomic,strong)UIView *mainView;
    
@property(nonatomic,strong)UIView *bgView;
    
@property(nonatomic,copy)NSString *title;//标题标签

@property(nonatomic,copy)NSString *message;//消息标签

@property(nonatomic,copy)NSString *placeholder;//输入框提示标签
    
@property(nonatomic,strong)NSMutableAttributedString *messageAttribute;//消息富文本
    
@property(nonatomic,strong)UILabel *titleLabel;//标题标签
    
@property(nonatomic,strong)UILabel *messageLabel;//消息标签

@property(nonatomic,strong)UITextField *inputTextField;//输入框
    
@property(nonatomic,assign)BOOL hiddenTitle;//是否隐藏标题

@property(nonatomic,assign)BOOL showInput;//是否显示输入框
    
@property(nonatomic,copy)NSString *leftBtnTitle;//左边按钮标题
    
@property(nonatomic,copy)NSString *rightBtnTitle;//右边按钮标题
    
@property(nonatomic,strong)UIButton *leftBtn;//左按钮
    
@property(nonatomic,strong)UIButton *rightBtn;//右按钮
    
@property(nonatomic,copy)YHBtnIndexBlock buttonClickBlock;
    
@property(nonatomic,weak)id<YHCommonAlertviewDelegate> delegate;
    
@property(nonatomic,assign)YHCommonAnimationType animationType;//动画类型 方便以后拓展
    
@property(nonatomic,assign)CGFloat topOffSet;//可设置弹窗移动距离 负数即向下移
    
-(id)initWithTitle:(NSString *)title withMessage:(id)message  withLeftBtnTitle:(NSString *)leftBtnTitle withRightBtnTitle:(NSString *)rightBtnTitle;
    
-(id)initWithTitle:(NSString *)title withMessage:(id)message  withLeftBtnTitle:(NSString *)leftBtnTitle withRightBtnTitle:(NSString *)rightBtnTitle withDelegate:(id<YHCommonAlertviewDelegate>) delegate;
    
-(id)initWithTitle:(NSString *)title withMessage:(id)message withLeftBtnTitle:(NSString *)leftBtnTitle withRightBtnTitle:(NSString *)rightBtnTitle withButtonBlock:(YHBtnIndexBlock)block;

-(id)initWithTitle:(NSString *)title withPlaceholder:(NSString *)placeholder  withLeftBtnTitle:(NSString *)leftBtnTitle withRightBtnTitle:(NSString *)rightBtnTitle withDelegate:(id<YHCommonAlertviewDelegate>) delegate;
    
-(void)setButtonClickBlock:(YHBtnIndexBlock)buttonClickBlock;
    
-(void)showView;
    
-(void)showViewInSuperview:(UIView *)superview;
    
-(void)dismissView;
@end
