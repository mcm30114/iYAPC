//
//  WebViewController.h
//  iYAPC
//
//  Created by Michael Nachbaur on 11-02-10.
//  Copyright 2011 Decaf Ninja Software. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface WebViewController : UIViewController<UIWebViewDelegate> {
	UIWebView *_webView;
	IBOutlet UIBarButtonItem *_titleItem;
	IBOutlet UIBarButtonItem *_backItem;
	IBOutlet UIBarButtonItem *_forwardItem;
	IBOutlet UIBarButtonItem *_reloadItem;
	NSURL *_url;
}

@property (nonatomic, retain) IBOutlet UIWebView *webView;
@property (nonatomic, copy) NSURL *url;

- (IBAction)close:(id)sender;
- (IBAction)goBack:(id)sender;
- (IBAction)goForward:(id)sender;
- (IBAction)reload:(id)sender;
- (IBAction)openAction:(id)sender;

+ (WebViewController*)webViewControllerAtURL:(NSURL*)url;

@end
