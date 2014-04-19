//
//  PDDrawViewController.m
//  PictureDash
//
//  Created by Vincent Pillinger on 4/6/14.
//  Copyright (c) 2014 Vincent Pillinger. All rights reserved.
//

#import "PDDrawViewController.h"

@interface PDDrawViewController ()

@end

@implementation PDDrawViewController
@synthesize gameRound;
@synthesize fetchedResultsController;
@synthesize managedObjectContext;
- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    if ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone) {
        return (interfaceOrientation != UIInterfaceOrientationPortraitUpsideDown);
    } else {
        return YES;
    }
}

- (IBAction)BackButton:(id)sender {
}

- (IBAction)SubmitButton:(id)sender {
}
- (IBAction)submit:(id)sender {
}
@end
