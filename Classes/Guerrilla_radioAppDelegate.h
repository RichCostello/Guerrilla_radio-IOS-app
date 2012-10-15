//
//  Guerrilla_radioAppDelegate.h
//  Guerrilla_radio
//
//  Created by Richard Costello on 02/09/2012.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Guerrilla_radioViewController;

@interface Guerrilla_radioAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    Guerrilla_radioViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet Guerrilla_radioViewController *viewController;

@end

