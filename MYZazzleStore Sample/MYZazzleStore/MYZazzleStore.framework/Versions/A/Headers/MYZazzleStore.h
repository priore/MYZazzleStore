//
//  MYZazzleStore.h
//
//  Created by Danilo Priore on 19/04/12.
//  Copyright (c) 2012 prioregroup.com. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
    iPhone3GS = 179151805173890636,
    iPhone4 = 179288486673940119,
    GreetinsCard = 137200723343664417,
    Mousepad = 144564542675011430,
    Mug = 168854141235863796,
    Pillow = 189744386532501559,
    Stickers = 217054618665606484,
    TShirtLedies = 235334919151472417,
    TShirtMan = 235262998896712219
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

@end
