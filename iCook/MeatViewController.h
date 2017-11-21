//
//  MeatViewController.h
//  iCook
//
//  Created by Luke Penrose [el16lp] on 14/11/2017.
//  Copyright © 2017 University of Leeds. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MeatViewController : UIViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UIPickerView *MeatTypePicker;
@property (weak, nonatomic) IBOutlet UIPickerView *MeatRarenessPicker;
@property (weak, nonatomic) IBOutlet UITextField *MeatWeight;
@property (weak, nonatomic) IBOutlet UITextField *MeatCookingTime;
@property (weak, nonatomic) IBOutlet UILabel *MeatUnitsLabel;
@property (weak, nonatomic) IBOutlet UITextView *CookingInstructions;

- (IBAction)MeatUnitsSwitch:(UISwitch *)sender;

@end

