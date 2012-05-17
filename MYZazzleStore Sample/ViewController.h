//
//  ViewController.h
//  MYZazzleStore Sample
//
//  Created by Danilo Priore on 30/04/12.
//  Copyright (c) 2012 Prioregroup.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MYZazzleStore/MYZazzleStore.h>

@interface ViewController : UIViewController <MYZazzleStoreDelegate> {
    
    MYZazzleStore *myStore;
}

- (IBAction)myZazzleStoreBannerClick:(id)sender;

@end
