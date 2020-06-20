//
//  ViewController.m
//  CountButtonTwo
//
//  Created by zhouzhongliang on 2020/6/20.
//  Copyright © 2020 zhouzhongliang. All rights reserved.
//

#import "ViewController.h"
/* 动画倒计时 */
#import "CETimeDownView.h"
#import "CETimeDownConfig.h"


@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];
    
    CETimeDownConfig *config = [[CETimeDownConfig alloc]init];
//    config.timeType = HSFTimeType_HOUR_MINUTE;
//    config.bgColor = [UIColor redColor];
//    config.fontColor = [UIColor blueColor];
//    config.fontSize = 19.f;
//    config.fontColor_placeholder = [UIColor orangeColor];
//    config.fontSize_placeholder = 10.f;
    CETimeDownView *timeLabel_hsf = [[CETimeDownView alloc] initWityFrame:CGRectMake(self.view.frame.size.width * .5 - 100, 500, 200, 20) config:config timeChange:^(NSInteger time) {
        NSLog(@"time===%ld",(long)time);
    } timeEnd:^{
        NSLog(@"倒计时结束");
    }];
    [self.view addSubview:timeLabel_hsf];
    timeLabel_hsf.center = self.view.center;
    [timeLabel_hsf setcurentTime:60 * 60 * 20 * 3];
}


@end
