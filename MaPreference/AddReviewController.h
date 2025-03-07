//
//  AddReviewController.h
//  MaPreference
//
//  Created by Abegael Jackson & Oliver Andrews on 2015-06-02.
//  Copyright (c) 2015 Abegael Jackson & Oliver Andrews. All rights reserved.
//


#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@class PFUser;
@class PinPFObject;


@interface AddReviewController : UIViewController


@property (weak, nonatomic) IBOutlet UILabel *addReviewNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *addReviewAddressLabel;
@property (weak, nonatomic) IBOutlet UITextView *addReviewTextField;
@property (weak, nonatomic) IBOutlet UIButton *addReviewCancelButton;
@property (weak, nonatomic) IBOutlet UIButton *addReviewDoneButton;

@property (weak, nonatomic) CLLocation *location;
@property (strong, nonatomic) PFUser *currentUser;
@property (strong, nonatomic) PinPFObject *pin;


@end
