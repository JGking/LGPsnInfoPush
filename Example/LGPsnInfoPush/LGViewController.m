//
//  LGViewController.m
//  LGPsnInfoPush
//
//  Created by JGking on 12/11/2019.
//  Copyright (c) 2019 JGking. All rights reserved.
//

#import "LGViewController.h"
#import <LGPsnInfoPushFramework/LGPsnInfoPushFramework.h>

@interface LGViewController ()

@end

@implementation LGViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    [[LGPsnInfoPush defaultManager]openSocket];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
