//
//  DetailViewController.h
//  BirdBrowser
//
//  Created by Tilmann Steinmetz on 20/06/13.
//  Copyright (c) 2013 Tilmann Steinmetz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreData/CoreData.h>
#import "Spot.h"
#import "FMDatabase.h"
#import "Observation.h"
// 2017 #import "FileUploadEngine.h"


@interface DetailViewController : UIViewController <UITextFieldDelegate>
@property (strong, nonatomic) Spot *spot;
@property (strong, nonatomic) NSString *birdname;
@property (strong, nonatomic) NSString *birdnotes;
// 2017 @property (strong, nonatomic) FileUploadEngine *flUploadEngine;


@property (weak, nonatomic) IBOutlet UITextView *noteTextView;
@property (weak, nonatomic) IBOutlet MKMapView *mapView;
@property (weak, nonatomic) IBOutlet UITableViewCell *birdObservationCell;
@property (weak, nonatomic) IBOutlet UITextField *labelAllObservations;
@property (weak, nonatomic) IBOutlet UITextField *labelProtocol;
@property (weak, nonatomic) IBOutlet UITextField *labelDuration;
@property (weak, nonatomic) IBOutlet UILabel *lblTitle;
@property (weak, nonatomic) IBOutlet UILabel *lblText;


- (IBAction)mailMe:(id)sender;
- (IBAction)addBird:(id)sender;
- (IBAction)buttonUpload:(id)sender;

@end
