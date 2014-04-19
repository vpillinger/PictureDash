//
//  Game.h
//  PictureDash
//
//  Created by Joanne Wagner on 4/19/14.
//  Copyright (c) 2014 Vincent Pillinger. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Game : NSManagedObject

@property (nonatomic, retain) id gameRounds;
@property (nonatomic, retain) NSDate * dateStarted;
@property (nonatomic, retain) NSString * gameName;

@end
