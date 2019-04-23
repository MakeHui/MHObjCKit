//
//  ViewController.m
//  MHObjCKitDemo
//
//  Created by MakeHui on 22/10/18.
//  Copyright © 2018年 MakeHui. All rights reserved.
//

#import "ViewController.h"
#import "ZFFullScreenViewController.h"

@interface ViewController ()<UITableViewDelegate>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    if (indexPath.section == 0 && indexPath.row == 1) {
        ZFFullScreenViewController *vc = [ZFFullScreenViewController new];
        [self.navigationController pushViewController:vc animated:true];
    }
}


@end
