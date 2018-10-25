//
//  NSString+XFCategory.h
//  XiaoFuTechBasic
//
//  Created by 胡文峰 on 2017/9/25.
//  Copyright © 2017年 XiaoFu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (XFCategory)

/**
 正则匹配判定
 @param regEx 正则表达式
 @return 判定结果
 */
- (BOOL)xf_IsMatchRegEx:(NSString *)regEx;

/**
 SHA-256加密
 @return 已加密字符串
 */
- (NSString *)xf_EncryptSHA256;
+ (NSString *)XF_EncryptSHA256:(NSData *)keyData;

/**
 SHA-1加密
 @return 已加密字符串
 */
- (NSString *)xf_EncryptSHA1;
+ (NSString *)XF_EncryptSHA1:(NSData *)keyData;


/**
 MD5加密
 @return 已加密字符串
 */
- (NSString *)xf_EncryptMD5;

@end
