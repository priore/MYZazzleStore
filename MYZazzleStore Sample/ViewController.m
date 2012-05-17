//
//  ViewController.m
//  MYZazzleStore Sample
//
//  Created by Danilo Priore on 30/04/12.
//  Copyright (c) 2012 Prioregroup.com. All rights reserved.
//

#import "ViewController.h"

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    // inizializing my store
    myStore = [[MYZazzleStore alloc] initWithFrame:CGRectMake(0, 50, 320, 410)];
    myStore.view.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    myStore.delegate = self;
    
    // single image for all products
    myStore.imageLink = @"http://www.prioregroup.com/images/zazzle/luigi_priore.png";
    
    // your Zazzle ID, this will allow you to earn referral on purchases
    // myStore.accountId = 1234567890;

    // show products list
    [myStore reload];
    [self.view addSubview:myStore.view];
    
}

#pragma ark - MYZazzleStore Delegate

- (void)myZazzleStore:(MYZazzleStore *)myZazzleStore didFinish:(NSString *)storeTitle {
    
    // Called when reload products list is terminated.
    
}

- (BOOL)myZazzleStore:(MYZazzleStore *)myZazzleStore didAddProductId:(MYZazzleProductId)productId {
    
    // Called when a product is loaded. Use this to exclude a specific product. Return NO if you want to exclude the product loading.
    
    return YES;
}

- (NSString *)myZazzleStore:(MYZazzleStore *)myZazzleStore imageForSelectedProductId:(MYZazzleProductId)productId {
    
    // Called when a product is selected. Use this indicate the URL address of a specific image for the product, for example the correct sizes (look http://www.zazzle.co.uk/mk/custom/imageguidelines for sizes).
    
    return @"http://www.prioregroup.com/images/zazzle/luigi_priore.png";
}

- (IBAction)myZazzleStoreBannerClick:(id)sender {
    NSURL *url = [ [ NSURL alloc ] initWithString: @"http://www.zazzle.com/prioregroup" ];
    [[UIApplication sharedApplication] openURL:url];
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    if ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone) {
        return (interfaceOrientation != UIInterfaceOrientationPortraitUpsideDown);
    } else {
        return YES;
    }
}

- (void)dealloc {
    
    [myStore release];
    [super dealloc];
}

@end
