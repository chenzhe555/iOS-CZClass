//
//  CZViewController.m
//  CZClass
//
//  Created by yunshan on 2019/4/29.
//  Copyright © 2019 chenzhe. All rights reserved.
//

#import "CZViewController.h"
#import <CZConfig/CZConfig.h>

@interface CZViewController ()

@end

@implementation CZViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self configVCInfo];
    [self initializeData];
    [self createMainView];
    [self doSomeThingsBeforeShow];
}

-(void)configVCInfo
{
    // YES: 如果视图里面存在唯一一个UIScrollView或子类，当前VC会自动设置相应的内边距，这样可以让UIScrollView或子类占据整个视图，又不会让导航栏遮盖。 NO: 取消内边距
    self.automaticallyAdjustsScrollViewInsets = NO;
}

@end
