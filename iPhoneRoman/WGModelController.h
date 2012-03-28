//
//  WGModelController.h
//  iPhoneRoman
//
//  Created by Raymond T. Hightower on 3/27/12.
//  Copyright (c) 2012 WisdomGroup. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WGDataViewController;

@interface WGModelController : NSObject <UIPageViewControllerDataSource>

- (WGDataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(WGDataViewController *)viewController;

@end
