//
//  MYZazzleStore.h
//
//  Created by Danilo Priore on 19/04/12.
//  Copyright (c) 2012 prioregroup.com. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
    iPhone3GS = 0,
    iPhone4 = 1,
    GreetinsCard = 2,
    Mousepad = 3,
    Mug = 4,
    Pillow = 5,
    Stickers = 6,
    TShirtLedies = 7,
    TShirtMan = 8
} MYZazzleProductId;

@protocol MYZazzleStoreDelegate;

@interface MYZazzleStore : UITableViewController

@property (nonatomic, retain) NSString *title;

// zazzle account, this will allow you to earn referral on purchases
@property (nonatomic, retain) NSString *accountId;
@property (nonatomic, retain) NSString *imageLink;

// font and colors
@property (nonatomic, retain) UIFont *textFont;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, retain) UIColor *titleColor;
@property (nonatomic, retain) UIColor *backgroundColor;

// row colors
@property (nonatomic, retain) UIColor *rowBackgroundColor;
@property (nonatomic, retain) UIColor *rowAlternateBackgroundColor;
@property (nonatomic, retain) UIColor *rowSelectedBackgroundColor;

@property (nonatomic, assign) id<MYZazzleStoreDelegate> delegate;

- (id)initWithFrame:(CGRect)frame;
- (void)reload;
- (void)openStoreWithProductId:(MYZazzleProductId)productId;

@end

@protocol MYZazzleStoreDelegate <NSObject>

@optional

- (void)myZazzleStore:(MYZazzleStore*)myZazzleStore didFinish:(NSString*)storeTitle;
- (BOOL)myZazzleStore:(MYZazzleStore*)myZazzleStore didAddProductId:(MYZazzleProductId)productId; 
- (NSString*)myZazzleStore:(MYZazzleStore*)myZazzleStore imageForSelectedProductId:(MYZazzleProductId)productId;
- (void)myZazzleStore:(MYZazzleStore*)myZazzleStore openStore:(NSURL*)url;

@end
