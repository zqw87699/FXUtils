//
//  FXDateUtils.h
//  Test
//
//  Created by 张大宗 on 2017/10/17.
//  Copyright © 2017年 张大宗. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FXDateUtils : NSObject

/*
 *  获取当前系统时间
 */
+ (NSString*)currentSystemDate;

/*
 *  获取当前系统时间.自定义格式
 */
+ (NSString*)currentSystemDateWithFormat:(NSString*)format;

@end
