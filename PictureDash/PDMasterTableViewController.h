//
//  PDMasterTableViewController.h
//  PictureDash
//
//  Created by Joanne Wagner on 4/19/14.
//  Copyright (c) 2014 Vincent Pillinger. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PDGameBarController.h"
@interface PDMasterTableViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) PDGameBarController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
