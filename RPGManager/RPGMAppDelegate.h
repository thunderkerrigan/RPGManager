//
//  RPGMAppDelegate.h
//  RPGManager
//
//  Created by joseph Pasqualini on 06/10/13.
//  Copyright (c) 2013 joseph Pasqualini. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RPGMAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
