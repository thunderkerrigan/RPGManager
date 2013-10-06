//
//  RPGMMasterViewController.h
//  RPGManager
//
//  Created by joseph Pasqualini on 06/10/13.
//  Copyright (c) 2013 joseph Pasqualini. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RPGMDetailViewController;

#import <CoreData/CoreData.h>

@interface RPGMMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) RPGMDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
