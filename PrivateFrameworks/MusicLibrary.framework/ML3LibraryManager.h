/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3MusicLibrary;

@interface ML3LibraryManager : NSObject  {
    ML3MusicLibrary *_currentLibrary;
}

@property(retain) ML3MusicLibrary * currentLibrary;

+ (id)sharedManager;

- (id)pathToLibraryForAccount:(id)arg1;
- (id)libraryForAccount:(id)arg1;
- (void)setCurrentLibrary:(id)arg1;
- (void)_deviceSharedLibraryDidChangeDistributedNotification:(id)arg1;
- (void)_switchToLibrary:(id)arg1;
- (void)_teardownNotifications;
- (void)_setupNotifications;
- (id)currentLibrary;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end