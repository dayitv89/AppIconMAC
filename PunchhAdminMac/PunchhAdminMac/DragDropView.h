//
//  DragDropView.h
//  PunchhAdminMac
//
//  Created by Narendra Verma on 4/7/15.
//  Copyright (c) 2015 Narendra Verma. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface DragDropView : NSImageView<NSDraggingDestination,NSDraggingSource,NSPasteboardItemDataProvider>

@end
