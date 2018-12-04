#ifdef __CORDOVA_4_0_0
    #import <Cordova/CDVUIWebViewDelegate5.h>
#else
    #import <Cordova/CDVWebViewDelegate5.h>
#endif

#ifdef __CORDOVA_4_0_0
	@interface InjectWebViewDelegate: CDVUIWebViewDelegate
	  @property int webViewLoads;
	  - (void)webViewDidFinishLoad:(UIWebView*)theWebView;
	  - (void)injectJavascriptString:(NSString*)resource intoWebView:(UIWebView*)webView;
	  - (void)injectJavascriptFile:(NSString*)resource intoWebView:(UIWebView*)webView;

	@end
#else
    @interface InjectWebViewDelegate: CDVWebViewDelegate
	  @property int webViewLoads;
	  - (void)webViewDidFinishLoad:(UIWebView*)theWebView;
	  - (void)injectJavascriptString:(NSString*)resource intoWebView:(UIWebView*)webView;
	  - (void)injectJavascriptFile:(NSString*)resource intoWebView:(UIWebView*)webView;

	@end
#endif
