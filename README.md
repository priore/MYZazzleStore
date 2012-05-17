With **MYZazzleStore** SDK it's really simple to add a gift shop to your application for your users. With a few lines of code you can give your users the opportunity to purchase T-shirts personalized mugs, iphone / ipad covers and other types of gifts. It also allows you to increase financial gains and increase the popularity of your products.

## Features

* Tableview that you can use wherever you want.
* Earn a percent (%) on sales of personalized gifts. Just create your account on [Zazzle.com](http://www.zazzle.com), set the framework with your id, and for every sale you will get a percentage (%) of earned.

In this version there is a detailed example of how to use the framework, but just use these simple commands, listed below, to get full functionality :


MYZazzleStore myStore = [[MYZazzleStore alloc] initWithFrame:CGRectMake(0, 50, 320, 410)];

myStore.imageLink = @"http://www.my-domain.com/my-image.png";

// your Zazzle ID, this will allow you to earn referral on purchases (optional)

myStore.accountId = 1234567890;

[myStore reload];

[self.view addSubview:myStore.view];


Using the delegates provided by the framework, you can also customize the image for each product type. Everything you need to know to use this framework is included in the documentation.

## Requirements

* iPhone / iPad
* iOS 3.2 o later
* QuartzCore.framework
* UIKit.framework
* Foundation.framework
* CoreGraphics.framework

## Dependencies _(already included in sample)_

* [MWFeedParser](https://github.com/priore/MWFeedParser)
* MYZazzle Library (FREE!!)

## Screenshot

![MYZazzleStore](http://www.prioregroup.com/images/github/myzazzlestore.jpg)
 