//
//  PDHistoryViewController.h
//  PictureDash
//
//  Created by Vincent Pillinger on 4/6/14.
//  Copyright (c) 2014 Vincent Pillinger. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PDGameViewController.h"

@interface PDHistoryViewController : UIViewController <PDGameViewController>
@property (weak, nonatomic) IBOutlet UILabel *promptPlayerName;
@property (weak, nonatomic) IBOutlet UILabel *prompt;
@property (weak, nonatomic) IBOutlet UILabel *ImagePlayerName;
@property (weak, nonatomic) IBOutlet UIImageView *image;

@end
