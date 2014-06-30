//
//  MainViewController.m
//  Hello World
//
//  Created by Julio Carrettoni on 5/26/14.
//  Copyright (c) 2014 Julio Carrettoni. All rights reserved.
//

#import "MainViewController.h"

@interface MainViewController ()

@end

@implementation MainViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
}

- (IBAction)onHelloButtonTUI:(id)sender {
    [[[UIAlertView alloc] initWithTitle:@"Hello World"
                                message:@""
                               delegate:nil
                      cancelButtonTitle:@"OK"
                      otherButtonTitles:nil] show];
}

@end
