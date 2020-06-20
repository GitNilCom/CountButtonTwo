//
//  CETimeNumberView.h
//  CountButtonTwo
//
//  Created by zhouzhongliang on 2020/6/20.
//  Copyright © 2020 zhouzhongliang. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CETimeNumberView : UIScrollView

@property(nonatomic,assign) NSInteger curentNumber;
/* 初始化方法 */
- (instancetype)initWithFrame:(CGRect)frame maxNumber:(NSInteger)maxNumber fontSize:(CGFloat)fontSize fontColor:(UIColor *)fontColor bgColor:(UIColor *)bgColor cornerRadius:(CGFloat)cornerRadius;
- (void)numberChange;

@end

NS_ASSUME_NONNULL_END
