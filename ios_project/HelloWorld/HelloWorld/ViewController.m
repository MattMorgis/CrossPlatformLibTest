//
//  ViewController.m
//  HelloWorld
//
//  Created by Morgis, Matthew (ELS-PHI) on 1/24/17.
//  Copyright © 2017 Matt Morgis. All rights reserved.
//

#import "ViewController.h"
#import "HWHelloWorld.h"

@interface ViewController ()

@property (nonatomic, strong) HWHelloWorld *helloWorldInterface;

@property (weak, nonatomic) IBOutlet UILabel *helloWorldLabel;

@end

@implementation ViewController

- (HWHelloWorld *)helloWorldInterface {
    if (!_helloWorldInterface) {
        _helloWorldInterface = [HWHelloWorld create];
    }
    
    return _helloWorldInterface;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    self.helloWorldLabel.text = @"";
}

- (IBAction)getHelloWorldButtonPressed:(id)sender {
    NSMutableString *currentLabelText = [NSMutableString stringWithString:self.helloWorldLabel.text];
    [currentLabelText appendFormat:@"%@ \n \n", [self.helloWorldInterface getHelloWorld]];
    self.helloWorldLabel.text = currentLabelText;
}

@end
