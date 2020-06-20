//
//  CETimeDownView.h
//  CountButtonTwo
//
//  Created by zhouzhongliang on 2020/6/20.
//  Copyright © 2020 zhouzhongliang. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class CETimeDownConfig;

@interface CETimeDownView : UIView

- (instancetype)initWityFrame:(CGRect)frame config:(CETimeDownConfig *)config timeChange:(void(^)(NSInteger time))timeChange timeEnd:(void(^)(void))timeEnd;
- (void)setcurentTime:(NSInteger)curentTime;

@end

NS_ASSUME_NONNULL_END
