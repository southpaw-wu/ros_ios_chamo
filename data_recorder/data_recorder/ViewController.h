//
//  ViewController.h
//  data_recorder
//
//  Created by user on 3/17/18.
//  Copyright © 2018 user. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ros/ros.h>
#include "std_msgs/String.h"

#import <QuartzCore/QuartzCore.h>
#import <CoreMotion/CoreMotion.h>
#import <CoreMedia/CoreMedia.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController<AVCaptureVideoDataOutputSampleBufferDelegate>{
    ros::Publisher img_chamo_pub;
    AVCaptureVideoDataOutput *video_output;
    bool need_record;
    int img_count;
}
@property (strong, nonatomic) NSUserDefaults *defaults;
@property (weak, nonatomic) IBOutlet UITextField *ip_text_field;
@property (weak, nonatomic) IBOutlet UIImageView *imgView;
    
- (IBAction)ip_edit_ended:(id)sender;
- (IBAction)start_record:(id)sender;
+ (NSString *)getIPAddress;
+ (BOOL)isValidIp:(NSString*)string;
- (BOOL)connectToMaster;


@end

