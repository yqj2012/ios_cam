//
//  RecListCell_iPad.h
//  P2PCamera
//
//  Created by yan luke on 12-12-29.
//
//

#import <UIKit/UIKit.h>

@interface RecListCell_iPad : UITableViewCell{
    IBOutlet UIImageView *imageView1;
    IBOutlet UIImageView *imageView2;
    IBOutlet UIImageView *imageView3;
}
@property (nonatomic, retain) UIImageView *imageView1;
@property (nonatomic, retain) UIImageView *imageView2;
@property (nonatomic, retain) UIImageView *imageView3;

@property (nonatomic, retain) IBOutlet UILabel* dateLabel1;
@property (nonatomic, retain) IBOutlet UILabel* dateLabel2;
@property (nonatomic, retain) IBOutlet UILabel* dateLabel3;
@end
