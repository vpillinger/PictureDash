//
//  PDDrawViewController.h
//  PictureDash
//
//  Created by Vincent Pillinger on 4/6/14.
//  Copyright (c) 2014 Vincent Pillinger. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GameRound.h"
#import "PDGameViewController.h"

@interface PDDrawViewController : UIViewController <PDGameViewController>

@property (strong, nonatomic) GameRound *currentRound;

- (IBAction)submit:(id)sender;

@end
