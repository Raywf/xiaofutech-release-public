//
//  UIViewController+XFCategory.h
//  XiaoFuTechBasic
//
//  Created by 胡文峰 on 2017/9/25.
//  Copyright © 2017年 XiaoFu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (XFCategory)

@property (nonatomic, strong) id xf_Parameters;

- (void)xf_SetNavigationTitleText:(NSString *)text;
- (void)xf_SetNavigationTitleTextFont:(UIFont *)font;
- (void)xf_SetNavigationTitleTextColor:(UIColor *)color;
- (void)xf_SetNavigationLeftItems:(NSArray *)items;
- (void)xf_SetNavigationRightItems:(NSArray *)items;

@end
