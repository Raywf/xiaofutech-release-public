//
//  UIColor+XFCategory.h
//  XiaoFuTechBasic
//
//  Created by 胡文峰 on 2017/9/25.
//  Copyright © 2017年 XiaoFu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (XFCategory)

///获取一个随机颜色
+ (UIColor *)XF_GetArc4randomColor:(float)alpha;
///获取颜色color对应的整数值int
+ (int)XF_GetIntValueFromColor:(UIColor *)color;
///获取颜色color对应的浮点数值double
+ (double)XF_GetDoubleValueFromColor:(UIColor *)color;

///将一个颜色字符串转成UIColor
+ (UIColor *)XF_ColorWithHexString:(NSString *)color;
+ (UIColor *)XF_ColorwithHexString:(NSString *)color Alpha:(CGFloat)alpha;
+ (NSString *)XF_HexStringWithColor:(UIColor *)color HasAlpha:(BOOL)hasAlpha;

//判断颜色是不是亮色 - 未验证
+ (BOOL)XF_IsLightColor:(UIColor *)color;
//获取RGB值 - 未验证
+ (void)XF_GetRGBComponents:(CGFloat [3])components forColor:(UIColor *)color;

- (int)xf_GetRed;
- (int)xf_GetGreen;
- (int)xf_GetBlue;
- (CGFloat)xf_GetAlpha;



@end
