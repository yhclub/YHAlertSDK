//
//  YHCommonAlertView.h
//  YHRongYiTong
//
//  Created by zxl on 2017/11/13.
//  Modify by Ljt on 2018/11/03.
//  Copyright © 2017年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

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

/**
 按钮点击代理事件
 
 @param commonAlertView 弹窗视图
 @param buttonIndex 按钮的index. default rightButton is 0，leftButton is 1
 */
- (void)commonAlertView:(YHCommonAlertView *)commonAlertView clickedButtonAtIndex:(NSInteger)buttonIndex;

/**
 自定义中间视图

 @param commonAlertView 定义中间视图
 @return 定义中间视图
 */
- (UIView *)middleViewInCommonAlertView:(YHCommonAlertView *)commonAlertView;


/**
 获取中间视图的高度
 @return height
 */
-(CGFloat)heightForMiddleViewInCommonAlertView:(YHCommonAlertView *)commonAlertView;

@end

typedef void(^YHBtnIndexBlock)(NSInteger buttonIndex);



/**
 *
 *  通用弹窗视图
 *
 */
@interface YHCommonAlertView : UIView

#pragma mark init commonalertview

@property(nonatomic,copy)NSString *title;//标题标签

@property(nonatomic,copy)NSString *message;//消息标签

@property(nonatomic,copy)NSString *placeholder;//输入框提示标签
    
@property(nonatomic,strong)NSMutableAttributedString *messageAttribute;//消息富文本

@property(nonatomic,assign)BOOL hiddenTitle;//是否隐藏标题

@property(nonatomic,assign)BOOL showInput;//是否显示输入框
    
@property(nonatomic,copy)NSString *leftBtnTitle;//左边按钮标题
    
@property(nonatomic,copy)NSString *rightBtnTitle;//右边按钮标题

@property(nonatomic,assign,getter=isPassiveDismiss) BOOL passiveDismiss;//点击按钮之后是否消失.default NO.

@property(nonatomic,copy)YHBtnIndexBlock buttonClickBlock;
    
@property(nonatomic,weak)id<YHCommonAlertviewDelegate> delegate;
    
@property(nonatomic,assign)YHCommonAnimationType animationType;//动画类型 方便以后拓展
    
@property(nonatomic,assign)CGFloat topOffSet;//可设置弹窗移动距离 正数即向下移

@property(nonatomic,strong)UILabel *titleLabel;//标题标签

@property(nonatomic,strong)UILabel *messageLabel;//消息标签

@property(nonatomic,strong)UITextField *inputTextField;//输入框

@property(nonatomic,strong)UIButton *leftBtn;//左按钮 默认tag为1

@property(nonatomic,strong)UIButton *rightBtn;//右按钮 默认tag为0，bgView的tag为-1

@property(nonatomic,strong)UIView *middleView;

@property(nonatomic,strong)UIView *mainView;

@property(nonatomic,strong)UIView *bgView;

@property(nonatomic,assign)BOOL isShow;

@property(nonatomic,assign)BOOL isAnimating;//正在显示动画中

/**
 * 单例
 */
+ (id)sharedInstance;

/**
 * 初始化(init)
 */
-(id)initWithTitle:(NSString *)title withMessage:(id)message  withLeftBtnTitle:(NSString *)leftBtnTitle withRightBtnTitle:(NSString *)rightBtnTitle;
    
-(id)initWithTitle:(NSString *)title withMessage:(id)message  withLeftBtnTitle:(NSString *)leftBtnTitle withRightBtnTitle:(NSString *)rightBtnTitle withDelegate:(id<YHCommonAlertviewDelegate>) delegate;
    
-(id)initWithTitle:(NSString *)title withMessage:(id)message withLeftBtnTitle:(NSString *)leftBtnTitle withRightBtnTitle:(NSString *)rightBtnTitle withButtonBlock:(YHBtnIndexBlock)block;

-(id)initWithTitle:(NSString *)title withPlaceholder:(NSString *)placeholder  withLeftBtnTitle:(NSString *)leftBtnTitle withRightBtnTitle:(NSString *)rightBtnTitle withDelegate:(id<YHCommonAlertviewDelegate>) delegate;


-(void)setDataWithTitle:(NSString *)title withMessage:(id)message withLeftBtnTitle:(NSString *)leftBtnTitle withRightBtnTitle:(NSString *)rightBtnTitle withPlaceholder:(NSString *)placeholder;


/**
 * 显示界面(add to keyWindow)
 */
-(void)showView;

/**
 * 显示界面(add to superview)
 */
-(void)showViewInSuperview:(UIView *)superview;


/**
 * 关闭界面(removeFromSuperview)
 */
-(void)dismissView;

@end
