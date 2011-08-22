//
//  NSData+HMAC.h
//  HMAC
//
//  Created by Donald Ness on 8/21/11.
//

#import <Foundation/Foundation.h>

@interface NSData (HMAC)

- (NSData *)md5HashWithKey:(NSData *)key;
- (NSData *)sha1HashWithKey:(NSData *)key;
- (NSData *)sha256HashWithKey:(NSData *)key;
- (NSData *)sha512HashWithKey:(NSData *)key;

@end
