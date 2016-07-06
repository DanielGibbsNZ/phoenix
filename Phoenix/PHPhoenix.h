/*
 * Phoenix is released under the MIT License. Refer to https://github.com/kasper/phoenix/blob/master/LICENSE.md
 */

@import Foundation;
@import JavaScriptCore;

#import "PHContext.h"

@protocol PHPhoenixJSExport <JSExport>

#pragma mark - Actions

- (void) reload;
- (void) set:(NSDictionary<NSString *, id> *)preferences;
- (void) log:(NSString *)message;
- (void) notify:(NSString *)message;

JSExportAs(storage, - (id) key:(NSString *)key value:(id)value);

@end

@interface PHPhoenix : NSObject <PHPhoenixJSExport>

#pragma mark - Initialising

+ (instancetype) new NS_UNAVAILABLE;
- (instancetype) init NS_UNAVAILABLE;

- (instancetype) initWithDelegate:(id<PHContextDelegate>)delegate NS_DESIGNATED_INITIALIZER;
+ (instancetype) withDelegate:(id<PHContextDelegate>)delegate;

@end
