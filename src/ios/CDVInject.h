#import <Cordova/CDV.h>
#import "CDVInjectWebViewDelegate.h"

@interface Inject: CDVPlugin<UIWebViewDelegate>{
    #ifdef __CORDOVA_4_0_0
		CDVUIWebViewDelegate* webViewDelegate;
	#else
		CDVWebViewDelegate* webViewDelegate;
	#endif
}
	@property (nonatomic, strong) NSMutableArray* injects;
	- (void)addInject:(CDVInvokedUrlCommand*)command;
	- (void)javascriptString:(CDVInvokedUrlCommand*)command;
	- (void)javascriptFile:(CDVInvokedUrlCommand*)command;
@end

