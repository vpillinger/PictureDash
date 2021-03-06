//
//  Entity.h
//  PictureDash
//
//  Created by Joanne Wagner on 4/19/14.
//  Copyright (c) 2014 Vincent Pillinger. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Entity : NSManagedObject

@property (nonatomic, retain) id drawing;
@property (nonatomic, retain) NSString * gameKey;
@property (nonatomic, retain) NSString * prompt;

@end
