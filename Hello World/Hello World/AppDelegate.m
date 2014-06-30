//
//  AppDelegate.m
//  Hello World
//
//  Created by Julio Carrettoni on 5/26/14.
//  Copyright (c) 2014 Julio Carrettoni. All rights reserved.
//

#import "GestureKit.h"
#import "AppDelegate.h"
#import "MainViewController.h"

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    // Override point for customization after application launch.
    self.window.rootViewController = [MainViewController new];
    self.window.backgroundColor = [UIColor whiteColor];
    [self.window makeKeyAndVisible];
    [GestureKit runInWindow:self.window withGID:@"38381630-b759-4c55-91c1-985306dbe587"];
    [GestureKit showDebugLogs:YES];
    return YES;
}

- (void) HELLO {
    [[[UIAlertView alloc] initWithTitle:@"Hello Gesture Kit"
                                message:@""
                               delegate:nil
                      cancelButtonTitle:@"OK"
                      otherButtonTitles:nil] show];
}

@end
