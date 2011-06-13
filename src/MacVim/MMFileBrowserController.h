#import <Cocoa/Cocoa.h>

@class MMWindowController;
@class FileSystemItem;

@interface MMFileBrowserController : NSViewController <NSOutlineViewDataSource, NSOutlineViewDelegate> {
  MMWindowController *windowController;
  NSPathControl *pathControl;
  FileSystemItem *rootItem;
  FSEventStreamRef fsEventsStream;
  BOOL userHasChangedSelection;
  BOOL viewLoaded;
}

- (id)initWithWindowController:(MMWindowController *)controller;
- (void)cleanup;
- (void)setRoot:(NSString *)root;
- (void)open;
- (void)close;
- (void)selectInBrowser;
- (void)selectInBrowserByExpandingItems;

- (NSMenu *)menuForRow:(NSInteger)row;

@end


@interface FlippedView : NSView {
}
@end