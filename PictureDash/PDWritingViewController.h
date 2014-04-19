//
//  PDWritingViewController.h
//  PictureDash
//
//  Created by Vincent Pillinger on 4/6/14.
//  Copyright (c) 2014 Vincent Pillinger. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PDGameViewController.h"
@interface PDWritingViewController : UIViewController <PDGameViewController>
- (IBAction)backButton:(id)sender;
- (IBAction)submitButton:(id)sender;
@property (weak, nonatomic) IBOutlet UIImageView *imageDisplay;
- (IBAction)promptBox:(id)sender;

@end
