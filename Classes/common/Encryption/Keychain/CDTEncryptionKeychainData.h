//
//  CDTEncryptionKeychainData.h
//
//
//  Created by Enrique de la Torre Fernandez on 12/04/2015.
//
//
//  Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file
//  except in compliance with the License. You may obtain a copy of the License at
//  http://www.apache.org/licenses/LICENSE-2.0
//  Unless required by applicable law or agreed to in writing, software distributed under the
//  License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
//  either express or implied. See the License for the specific language governing permissions
//  and limitations under the License.
//

#import <Foundation/Foundation.h>

/**
 It is never safe storing a DPK (Data Protection Key), it is a better idea to store an encrypted
 version of it. However, to use it again, it has to be decrypted which means that it has to be
 saved with enough data to inverse the process but without exposing too much information.

 This class defines all the values required to store an encrypted DPK and decipher it later on.

 @see CDTEncryptionKeychainStorage
 */
@interface CDTEncryptionKeychainData : NSObject <NSCoding>

@property (strong, nonatomic, readonly) NSData *encryptedDPK;
@property (strong, nonatomic, readonly) NSData *salt;
@property (strong, nonatomic, readonly) NSData *iv;
@property (assign, nonatomic, readonly) NSInteger iterations;
@property (strong, nonatomic, readonly) NSString *version;

- (instancetype)initWithEncryptedDPK:(NSData *)encryptedDPK
                                salt:(NSData *)salt
                                  iv:(NSData *)iv
                          iterations:(NSInteger)iterations
                             version:(NSString *)version;

+ (instancetype)dataWithEncryptedDPK:(NSData *)encryptedDPK
                                salt:(NSData *)salt
                                  iv:(NSData *)iv
                          iterations:(NSInteger)iterations
                             version:(NSString *)version;

@end