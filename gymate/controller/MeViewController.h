#import <UIKit/UIKit.h>
#import "BaseViewController.h"

@interface MeViewController : BaseViewController

@property (nonatomic, retain) IBOutlet UILabel *name;
@property (nonatomic, retain) IBOutlet UILabel *weight;
@property (nonatomic, retain) IBOutlet UILabel *height;
@property (nonatomic, retain) IBOutlet UIButton *myPlan;

- (IBAction)myPlan:(id)sender;

@end
