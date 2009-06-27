//
//  SettingsIndexViewController.h
//  TransFS Card Terminal
//
//  Created by Joshua Krall on 3/8/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AboutSettingsController.h"
#import "GeneralSettingsViewController.h"
#import "EmailSettingsViewController.h"
#import "AuthNetSettingsController.h"
#import "PaypalSettingsController.h"

@interface SettingsIndexViewController : UITableViewController {
	IBOutlet AboutSettingsController* aboutSettingsController;
	IBOutlet GeneralSettingsViewController* generalSettingsController;
	IBOutlet EmailSettingsViewController* emailSettingsController;
	IBOutlet AuthNetSettingsController* authNetSettingsController;
	IBOutlet PaypalSettingsController* paypalSettingsController;	
	
	int selectedGatewayIndex;
}

@property (nonatomic, retain) IBOutlet AboutSettingsController* aboutSettingsController;
@property (nonatomic, retain) IBOutlet GeneralSettingsViewController* generalSettingsController;
@property (nonatomic, retain) IBOutlet EmailSettingsViewController* emailSettingsController;
@property (nonatomic, retain) IBOutlet AuthNetSettingsController* authNetSettingsController;
@property (nonatomic, retain) IBOutlet PaypalSettingsController* paypalSettingsController;	

@property(assign) int selectedGatewayIndex;

@end