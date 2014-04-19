//
//  PDGameViewController.h
//  PictureDash
//
//  Created by Joanne Wagner on 4/18/14.
//  Copyright (c) 2014 Vincent Pillinger. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GameRound.h"
@protocol PDGameViewController <NSObject, NSFetchedResultsControllerDelegate>
@property (strong, nonatomic) GameRound *gameRound;
@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@end
