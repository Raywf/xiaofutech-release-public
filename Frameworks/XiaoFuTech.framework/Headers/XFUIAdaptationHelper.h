//
//  XFUIAdaptationHelper.h
//  XiaoFuTech
//
//  Created by 胡文峰 on 2018/1/19.
//  Copyright © 2018年 XiaoFu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XFUIAdaptationHelper : NSObject

+ (CGFloat)SysVersion;

+ (NSString *)AppShortVersion;

+ (NSString *)AppBuildVersion;

+ (CGFloat)Width;

+ (CGFloat)Height;

+ (CGFloat)Scale;

+ (CGFloat)SafeTop;

+ (CGFloat)SafeBottom;

+ (CGFloat)Scale4iPad;

@end
