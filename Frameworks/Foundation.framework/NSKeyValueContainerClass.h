/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface NSKeyValueContainerClass : NSObject  {
    Class _originalClass;
    int (*_cachedObservationInfoImplementation)();
    int (*_cachedSetObservationInfoImplementation)();
    BOOL _cachedSetObservationInfoTakesAnObject;
    struct { Class x1; Class x2; struct __CFSet {} *x3; struct __CFDictionary {} *x4; } *_notifyingInfo;
}


- (id)initWithOriginalClass:(Class)arg1;
- (id)description;

@end