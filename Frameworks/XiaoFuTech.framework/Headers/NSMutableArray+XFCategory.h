//
//  NSMutableArray+XFCategory.h
//  XiaoFuTech
//
//  Created by 胡文峰 on 2018/2/2.
//  Copyright © 2018年 XiaoFu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableArray (XFCategory)

- (void)xf_moveObjectFromIndex:(NSUInteger)fromIndex toIndex:(NSUInteger)toIndex;

@end
