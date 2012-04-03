//
//  PTFlipsideViewController.h
//  PairingTest
//
//  Created by Polidea Sp. z o.o. on 03.04.2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PTFlipsideViewController;

@protocol PTFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(PTFlipsideViewController *)controller;
@end

@interface PTFlipsideViewController : UIViewController

@property (assign, nonatomic) id <PTFlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
