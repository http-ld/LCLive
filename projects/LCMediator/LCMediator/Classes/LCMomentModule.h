//
//  LCMomentModule.h
//  LCMediator
//
//  Created by MengLingChao on 2018/7/6.
//  Copyright © 2018年 MengLingChao. All rights reserved.
//

#import <Foundation/Foundation.h>

/**朋友圈模块协议*/
@protocol LCMomentModule <NSObject>

/**跳转到动态详情*/
+ (void)pushMomentDetailViewControllerFromViewController:(UIViewController *)viewController;

@end
