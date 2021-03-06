/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDLocationSeriesSyncEntity : HDSampleSyncEntity <HDNanoSyncEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_baseDataObjectPredicate;
+ (id)_objectWithCodable:(id)arg1;
+ (Class)healthEntityClass;
+ (int)nanoSyncObjectType;
+ (unsigned int)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (BOOL)supportsSpeculativeNanoSyncChanges;
+ (id)syncEntityDependenciesForNanoSyncProtocolVersion:(int)arg1;
+ (int)syncEntityType;

@end
