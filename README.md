# YHAlertSDK
YHAlertSDK：弹窗SDK
  
  易惠 IOS 通用弹窗

  ## Install

  使用cocoapods方式导入

  ```
  pod 'YHAlertSDK'
  ```

  ## Usage

  使用方法：

  ```
  ShowMsg(msg);     //提示普通消息
  ShowWarmingAlert(msg);    //提示警告消息
  ShowFailedMsg(msg);       //提示失败消息
  ShowSuccessedMsg(msg);    //提示成功消息
  ShowLoading(msg);         //加载中
  YHDismissLoading();       //停止加载并隐藏
  ShowClearLoading();       //加载中（屏蔽点击事件）

  ```
  个性化设置：
  
  ```
  [YHCommonHUD setDefaultLayoutType:YHAlertLayoutTypeHorizontal];//设置图片文字为水平布局
  [YHCommonHUD setDefaultLayoutType:YHAlertLayoutTypeVertical];//设置图片文字为上下布局
  
  [YHCommonHUD setDefaultStyleType:YHLoadingStyleTypeDefault];//设置loading的默认样式···
  [YHCommonHUD setDefaultStyleType:YHLoadingStyleTypeCustom];//设置loading的自定义样式，使用GIF图片（YHAlertLoadingGifImageNameString）
  
  [YHCommonHUD setDefaultMaskType:YHCommonHUDMaskTypeBlack];
  [YHCommonHUD setDefaultMaskType:YHCommonHUDMaskTypeNone];//default mask type
  [YHCommonHUD setDefaultMaskType:YHCommonHUDMaskTypeClear];

  ```

  ## Version
  ### V1.2.8
  2021年03月27日
  
  ```
  1、支持竖直布局和水平布局；
  2、支持自定义Gif加载框
  ```

  ### V1.2.7

  2021年01月27日

  ```
  feat:Mask模式修改，通用[YHCommonHUD set模式，指定ShowClearLoading()只支持YHCommonHUDMaskTypeClear(默认)、YHCommonHUDMaskTypeBlack(如果默认设置的话)
  ```
  
  ### V1.2.5

  2020年05月31日

  ```
  fix:修复bug，设置loading的颜色
  ```
  
  ### V1.2.4

  2020年05月30日

  ```
  1、Toast弹窗支持自定义阴影颜色和圆角大小；
  2、Alert弹窗支持自定义圆角
  3、设置YHSVProgressHUD_WORK为YES并导入SVProgressHUD即可切换使用SVProgressHUD
  ```

### V1.2.2

2020年03月23日

```
1、吐司弹窗：修改所有loading弹窗使用同一个单例；而其他吐司弹窗不使用单例，每次弹窗都new一个实例
2、通用弹窗AlertView:
2.1、修改默认动画类型为无动画
2.2、最初动画要设置动画类型为FromTop
3、fix: AlertView 在iOS13 无法弹出。
4、chore: 更新AlertView展示时间算法。
```

### V1.1.1

```
支持多个自定义弹窗！
```


### V1.0.9

```
自定义弹窗！
```



