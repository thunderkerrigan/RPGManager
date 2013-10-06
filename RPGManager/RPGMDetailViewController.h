//
//  RPGMDetailViewController.h
//  RPGManager
//
//  Created by joseph Pasqualini on 06/10/13.
//  Copyright (c) 2013 joseph Pasqualini. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RPGMDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
