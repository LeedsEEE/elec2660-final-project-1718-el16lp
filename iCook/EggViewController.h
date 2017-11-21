//
//  EggViewController.h
//  iCook
//
//  Created by Luke Penrose on 21/11/2017.
//  Copyright © 2017 University of Leeds. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EggViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIPickerView *EggStylePicker;
@property (weak, nonatomic) IBOutlet UIPickerView *EggRunninessPicker;
@property (weak, nonatomic) IBOutlet UITextField *EggCookingTime;
@property (weak, nonatomic) IBOutlet UITextView *EggCookingInstructions;

@end
