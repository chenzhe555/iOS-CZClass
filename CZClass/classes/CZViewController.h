//
//  CZViewController.h
//  CZClass
//
//  Created by yunshan on 2019/4/29.
//  Copyright © 2019 chenzhe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

typedef void (^PopBackCallback) (NSDictionary * dic);

NS_ASSUME_NONNULL_BEGIN

@interface CZViewController : UIViewController

@property (nonatomic, copy) PopBackCallback callback;


/**
 @brief 是否显示Tab，默认不显示
 */
@property (nonatomic, assign) BOOL isShowTab;
/**
 @brief 是否重新刷新当前VC数据
 */
@property (nonatomic, assign) BOOL reloadVCData;

#pragma mark 便利化方法
/**
 @brief 初始化数据
 */
-(void)initializeData;

/**
 @brief 创建视图
 */
-(void)createMainView;

/**
 @brief 视图创建完之后做的一些事情，比如网络请求等
 */
-(void)doSomeThingsBeforeShow;

/**
 @brief 进入VC后请求数据,结合doSomeThingsBeforeShow或者登录成功，退出登录或者地理位置改变等等情况需要重新刷新数据的时候会调用
 @discussion 子类可监听登录成功，退出登录或者地理位置改变等等通知，并结合属性reloadVCData，调用该方法，达到刷新数据的需求
 */
-(void)requestHttpData;
@end

NS_ASSUME_NONNULL_END
