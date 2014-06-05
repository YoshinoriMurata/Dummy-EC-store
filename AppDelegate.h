//
//  AppDelegate.h
//  Dummy EC store
//
//  Created by Yoshinori Murata on 2014/06/05.
//  Copyright (c) 2014年 Yoshinori Murata. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>{
    //カウント用の変数
    NSInteger myCount;
}
@property (nonatomic, assign) NSInteger myCount;

@property (strong, nonatomic) UIWindow *window;

@end
