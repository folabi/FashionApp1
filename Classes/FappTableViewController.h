//
//  FappTableViewController.h
//  FashionApp1
//
//  Created by Owner Mcuser on 11/08/2011.
//  Copyright 2011 None. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface FappTableViewController : UITableViewController {
    
    UILabel *numberTitle;
    UIImageView *numberImage;
    
}

@property (nonatomic, retain) IBOutlet UILabel *numberTitle;
@property (nonatomic, retain) IBOutlet UIImageView *numberImage;

@end
