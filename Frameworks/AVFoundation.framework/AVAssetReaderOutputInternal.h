/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVRunLoopCondition, AVWeakReference;



@interface AVAssetReaderOutputInternal : NSObject 
{
    AVWeakReference *weakReference;
    struct OpaqueFigAssetReader { } *figAssetReader;
    NSInteger extractionID;
    AVRunLoopCondition *sampleBufferAvailabilityCondition;
    NSInteger status;
    struct dispatch_queue_s { } *statusSerializationQueue;
}



@end