//
//  Guerrilla_radioViewController.h
//  Guerrilla_radio
//
//  Created by Richard Costello on 02/09/2012.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Guerrilla_radioViewController : UIViewController {
IBOutlet UIWebView *webView;

}

-(IBAction)playButton:(id)sender;
@property (nonatomic, retain) UIWebView *webView;
@end



