//
//  FXDateUtils.m
//  Test
//
//  Created by 张大宗 on 2017/10/17.
//  Copyright © 2017年 张大宗. All rights reserved.
//

#import "FXDateUtils.h"

@implementation FXDateUtils

+ (NSString*)currentSystemDate{
    return [self currentSystemDateWithFormat:@"YYYY-MM-dd HH:mm:ss"];
}

+ (NSString*)currentSystemDateWithFormat:(NSString *)format{
    NSDate * senddate=[NSDate date];
    NSDateFormatter *dateformatter=[[NSDateFormatter alloc] init];
    [dateformatter setDateFormat:format];
    return [dateformatter stringFromDate:senddate];
}

@end
