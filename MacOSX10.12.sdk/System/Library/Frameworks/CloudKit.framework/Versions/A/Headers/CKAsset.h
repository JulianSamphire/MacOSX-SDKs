//
//  CKAsset.h
//  CloudKit
//
//  Copyright (c) 2014 Apple Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
NS_CLASS_AVAILABLE(10_10, 8_0)
@interface CKAsset : NSObject

- (instancetype)init NS_UNAVAILABLE;

/* Initialize an asset to be saved with the content at the given file URL */
- (instancetype)initWithFileURL:(NSURL *)fileURL;

/* Local file URL where fetched records are cached and saved records originate from. */
@property (nonatomic, readonly, copy) NSURL *fileURL;

@end
NS_ASSUME_NONNULL_END
