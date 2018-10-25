//
//  UIButton+XFCategory.h
//  XiaoFuTechBasic
//
//  Created by 胡文峰 on 2017/9/25.
//  Copyright © 2017年 XiaoFu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (XFCategory)

///快速创建一个Button, 所有参数都可以填nil
+ (UIButton *)XF_ButtonWithColor:(UIColor *)color Image:(NSString *)image Title:(NSString *)title Font:(UIFont *)font TitleColor:(UIColor *)titleColor Target:(id)target Action:(SEL)action Frame:(CGRect)frame;

///设置Button的背景色，采用将颜色转换为图片的方法，因为需要Button的Size，所以，方法调用必须在Button的Frame设置之后
- (void)xf_SetBackgroundColor:(UIColor *)backgroundColor forState:(UIControlState)state;

///设置虚线边框，因为需要Button的Size，所以，方法调用必须在Button的Frame设置之后
- (void)xf_SetDashLineBorderWidth:(CGFloat)borderWidth BorderColor:(UIColor *)borderColor DashPattren:(CGFloat)dashPattern IsRound:(BOOL)isRound;
///设置按钮的borderColor状态,最多四种
- (void)xf_SetBorderColor:(UIColor *)borderColor forState:(UIControlState)state;
///更新按钮的borderColor状态，一般跟随在sender.selected=?代码之后
- (void)xf_UpdateBorderStatus;

@end
