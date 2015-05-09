//
//  DetailViewController.h
//  CoffeeFindr
//
//  Created by David Seitz Jr on 5/8/15.
//  Copyright (c) 2015 DavidSights. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CoffeePlace.h"

@interface DetailViewController : UIViewController

@property CoffeePlace *coffeePlace;
@property CLLocation *currentLocation;


@end
