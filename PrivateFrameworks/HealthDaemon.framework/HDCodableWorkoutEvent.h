/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableWorkoutEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int date : 1; 
        unsigned int type : 1; 
    double _date;
    } _has;
    long long _type;
}

@property double date;
@property bool hasDate;
@property bool hasType;
@property long long type;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)date;
- (id)decodedDate;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDate;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDate:(double)arg1;
- (void)setHasDate:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setType:(long long)arg1;
- (long long)type;
- (void)writeTo:(id)arg1;

@end