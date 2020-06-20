//
//  CETimeDownConfig.h
//  CountButtonTwo
//
//  Created by zhouzhongliang on 2020/6/20.
//  Copyright © 2020 zhouzhongliang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger,HSFTimeType){
    HSFTimeType_HOUR_MINUTE_SECOND,
    HSFTimeType_HOUR_MINUTE
};

@interface CETimeDownConfig : NSObject

@property (nonatomic,assign) HSFTimeType timeType;
@property (nonatomic,strong) UIColor *bgColor;//背景颜色
@property (nonatomic,assign) CGFloat fontSize;//字体大小
@property (nonatomic,strong) UIColor *fontColor;//字体颜色
@property (nonatomic,assign) CGFloat fontSize_placeholder;//时分秒 字体大小
@property (nonatomic,strong) UIColor *fontColor_placeholder;//时分秒 字体颜色
@property (nonatomic,strong) UIColor *fontColor_day;//天数 字体颜色
@property (nonatomic,assign) CGFloat cornerRadius;//圆角

@end

NS_ASSUME_NONNULL_END
