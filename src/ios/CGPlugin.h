#import <Cordova/CDVPlugin.h>
#import "CGMeetViewDelegate.h"
#import "CGMeetView.h"

@interface CGPlugin : CDVPlugin<CGMeetViewDelegate> {
	CGMeetView* cgMeetView;
	CDVInvokedUrlCommand* commandBack;
}

- (void)loadURL:(CDVInvokedUrlCommand *)command;
- (void)destroy:(CDVInvokedUrlCommand *)command;
- (void)backButtonPressed:(CDVInvokedUrlCommand *)command; 
- (void)conferenceFailed:(NSDictionary *)data;
- (void)conferenceJoined:(NSDictionary *)data;
- (void)conferenceLeft:(NSDictionary *)data;
- (void)conferenceWillJoin:(NSDictionary *)data;
- (void)conferenceWillLeave:(NSDictionary *)data;
- (void)loadConfigError:(NSDictionary *)data;

@end