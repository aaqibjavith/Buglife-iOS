//
//  LIFEContainerViewController.h
//  Copyright (C) 2018 Buglife, Inc.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//
//

#import <UIKit/UIKit.h>

@interface LIFEContainerViewController : UIViewController

@property (nonatomic) UIStatusBarStyle statusBarStyle;
@property (nonatomic) BOOL statusBarHidden;

- (void)life_setChildViewController:(nonnull UIViewController *)childViewController animated:(BOOL)animated completion:(void (^_Nullable)(void))completion;
- (void)life_dismissEverythingAnimated:(BOOL)flag completion:(void (^ __nullable)(void))completion;
- (void)dismissWithWindowBlindsAnimation:(BOOL)animated completion:(void (^ __nullable)(void))completion;

@end
