//
//  PDWritingViewController.m
//  PictureDash
//
//  Created by Vincent Pillinger on 4/6/14.
//  Copyright (c) 2014 Vincent Pillinger. All rights reserved.
//

#import "PDWritingViewController.h"

@interface PDWritingViewController ()

@end

@implementation PDWritingViewController
@synthesize imageDisplay;

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)viewDidUnload
{
    [self setImageDisplay:nil];
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

- (IBAction)backButton:(id)sender {
}

- (IBAction)submitButton:(id)sender {
}
- (IBAction)promptBox:(id)sender {
}
@end
