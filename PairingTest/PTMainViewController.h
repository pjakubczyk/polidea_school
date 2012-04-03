//
//  PTMainViewController.h
//  PairingTest
//
//  Created by Polidea Sp. z o.o. on 03.04.2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "PTFlipsideViewController.h"

@interface PTMainViewController : UIViewController <PTFlipsideViewControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

- (IBAction)showInfo:(id)sender;

@end
