//
//  FirstViewController.h
//  MiniBSez
//
//  Created by Integrum on 8/21/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface FirstViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    UIButton *sezButton;
    UITableView *myTableView;
}

@property (nonatomic, retain) IBOutlet UIButton *sezButton;
@property (nonatomic, retain) NSMutableArray *tweets;

@property (nonatomic, retain) IBOutlet UITableView *myTableView;

- (IBAction) onSezButtonPressed:(id)sender;
- (void)tweetsLoaded:(NSMutableArray *)tweets;

@end
