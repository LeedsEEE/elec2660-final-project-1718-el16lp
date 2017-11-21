//
//  DryViewController.h
//  iCook
//
//  Created by Luke Penrose [el16lp] on 14/11/2017.
//  Copyright © 2017 University of Leeds. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DryViewController : UIViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UIPickerView *DryFoodPicker;
@property (weak, nonatomic) IBOutlet UIPickerView *DryFoodSoftnessPicker;
@property (weak, nonatomic) IBOutlet UITextField *DryWeight;
@property (weak, nonatomic) IBOutlet UITextField *DryWater;
@property (weak, nonatomic) IBOutlet UITextField *DryCookingTime;
@property (weak, nonatomic) IBOutlet UILabel *DryUnitsLabel;
@property (weak, nonatomic) IBOutlet UITextView *DryCookingInstructions;

- (IBAction)DryUnitsSwitch:(UISwitch *)sender;

@end

