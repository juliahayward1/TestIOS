//
//  HelloWorldAppDelegate.h
//  HelloWorld
//
//  Created by Julia Hayward on 25/01/2013.
//  Copyright (c) 2013 Julia Hayward. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldAppDelegate : UIResponder <UIApplicationDelegate>
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UILabel *Label;
@property (strong, nonatomic) UIWindow *window;

@end
