//
//  ViewController.m
//  CTCustomSegementView
//
//  Created by chengzhitong on 15/12/28.
//  Copyright © 2015年 CT. All rights reserved.
//

#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width


#import "ViewController.h"
#import "CTCustomSegmentView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    CTCustomSegmentView *v = [[CTCustomSegmentView alloc] initWithFrame:CGRectMake(30, 100, SCREEN_WIDTH - 60, 35)];
    v.titles = @[@"Hello", @"Apple", @"Swift", @"Objc"];
    v.duration = 0.3f;
    [v setButtonOnClickBlock:^(NSInteger tag, NSString *title) {
        NSLog(@"index = %ld, title = %@", (long)tag, title);
    }];
    
    [self.view addSubview:v];

}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
