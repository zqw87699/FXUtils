//
//  NSObject+FXExtension.h
//  AFNetworking
//
//  Created by 张大宗 on 2017/10/18.
//

#import <Foundation/Foundation.h>

@interface NSObject (FXExtension)

- (id)performSelector:(SEL)aSelector withObjects:(NSArray *)objects;

@end
