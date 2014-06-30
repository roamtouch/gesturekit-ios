//
//  GestureKit.h
//  RoamTouch
//
//  Created by Julio Andrés Carrettoni on 14/04/13.
//  Copyright (c) 2013 Julio Andrés Carrettoni. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@protocol GK_VisorProtocol;
@protocol GK_HelpVisor;

@interface GestureKit : NSObject

+ (void) runInWindow:(UIWindow*) window withGID:(NSString*) gid;
+ (void) runInWindow:(UIWindow*) window withGID:(NSString*) gid withVisor:(id<GK_VisorProtocol>) visor;

+ (void) setHelpVisor:(id<GK_HelpVisor>) helpVisor;

+ (void) setPos:(CGPoint) pos;

+ (void) showDebugLogs:(BOOL) show;
+ (void) showAlertLogs:(BOOL) show;

@end


//Protocol for implementing custom visors
@protocol GK_VisorProtocol <NSObject>

@required

//To draw the gesture in your visor
- (void) touchEvent:(NSInteger) pointID beganFromPoint:(CGPoint) point;
- (void) touchEvent:(NSInteger) pointID movedToPoint:(CGPoint) point;
- (void) touchEvent:(NSInteger) pointID endedAtPoint:(CGPoint) point;

//For showing the status of the addon to the end user.
- (void) showStaticLogo;
- (void) showErrorLogo;
- (void) showLoadingLogo;

- (void) setGestureColor:(UIColor*) color;

@optional
//In the case the visor is NOT fullscreen and can be moved around
- (void) setPos:(CGPoint) pos;

@end

@protocol GK_HelpVisor <NSObject>

//To show the help view when the end user performs the "?" gesture
- (void) showHelpView;

//You will recive a dictionary array with "name":<string*> and "img":<UIImage*> to populate the help view.
- (void) setGesturesArrayForHelp:(NSArray*) array;

- (void) setHelpBackgroundColor:(UIColor*) color;

@end
