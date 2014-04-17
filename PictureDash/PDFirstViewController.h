//
//  PDDrawViewController.h
//  PictureDash
//
//  Created by Vincent Pillinger on 4/6/14.
//  Copyright (c) 2014 Vincent Pillinger. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PDDrawViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *Prompt;
- (IBAction)BackButton:(id)sender;
- (IBAction)SubmitButton:(id)sender;

@end
