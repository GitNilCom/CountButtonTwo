//
//  CETimeDownConfig.m
//  CountButtonTwo
//
//  Created by zhouzhongliang on 2020/6/20.
//  Copyright © 2020 zhouzhongliang. All rights reserved.
//

#import "CETimeDownConfig.h"

@implementation CETimeDownConfig

//初始化方法
- (instancetype)init{
    if (self = [super init]) {
        //初始化默认值
        self.timeType = HSFTimeType_HOUR_MINUTE_SECOND;
        self.fontColor = [UIColor whiteColor];
        self.fontSize = 15.f;
        self.bgColor = [UIColor redColor];
        self.fontSize_placeholder = 15.f;
        self.fontColor_placeholder = [UIColor darkGrayColor];
        self.fontColor_day = [UIColor redColor];
        self.cornerRadius = 5.f;
    }
    return self;
}

@end
