//
//  ActiveViewController.h
//  Combo
//
//  Created by yilinlin on 13-3-19.
//  Copyright (c) 2013年 yilinlin. All rights reserved.
//

#import <UIKit/UIKit.h>
@class AddrViewController;
@class DetailViewController;
#import "SRRefreshView.h"
#import "SVSegmentedControl.h"
#import "ASIHTTPRequest.h"
#import "AddrDetailViewController.h"
#import "DetailViewController.h"
@interface ActiveViewController : UIViewController<UITableViewDataSource,UITableViewDelegate,ASIHTTPRequestDelegate,SRRefreshDelegate>
{
    UIActivityIndicatorView* acview;
    SVSegmentedControl *grayRC;
    UITableView* tableview;
    NSMutableArray* actsumarray;
    NSMutableArray* addrarray;
    NSString *userUUid;
    SRRefreshView *_slimeView;//下拉刷新
    int segment;//活动或者地点的标志位
    int flag;//标志位，判断是第几次加载，是否是加载更多
    int total;//本次接口返回的数量
    AddrDetailViewController* addrdetail;
    DetailViewController* detail;
}
@property (strong,nonatomic) NSMutableArray* addrarray;
@property (strong,nonatomic) NSMutableArray* actsumarray;
@property (nonatomic,retain) NSString *userUUid;
@property (strong,nonatomic) UITableView* tableview;
@end
