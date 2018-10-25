//
//  UIImage+XFCategory.h
//  XiaoFuTechBasic
//
//  Created by 胡文峰 on 2017/9/25.
//  Copyright © 2017年 XiaoFu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (XFCategory)

#pragma mark - Other Quick Methods
+ (UIImage *)XF_ImageWithColor:(UIColor *)color size:(CGSize)size;
+ (UIImage *)XF_ImageNamed:(NSString *)name WithTintColor:(UIColor *)color;

- (UIColor *)xf_ColorAtPixelPoint:(CGPoint)point Alpha:(CGFloat)alpha;

#pragma mark - Captured in app, Maybe without considering the Pixels
/**
 代码截图
 @param view 支持UIView及其子类
 @param cropRect 裁剪区域
 @return 裁剪完成的图片
 */
+ (UIImage *)XF_Captured:(id)view CropRect:(CGRect)cropRect;
+ (UIImage *)XF_CapturedView:(UIView *)view;
+ (UIImage *)XF_CapturedScrollView:(UIScrollView *)scrollView;
+ (UIImage *)XF_CapturedTableView:(UITableView *)tableView;

///图片尺寸修改
- (UIImage *)xf_imageByScalingToSize:(CGSize)targetSize;
- (UIImage *)xf_imageToScale:(float)scaleSize;
- (UIImage *)xf_imageAutoSize:(CGSize)size;

///判断图片是否偏黑
- (BOOL)xf_isBlackColor;

@end
