/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKCompoundBlockCoordinateList : HKGraphSeriesBlockCoordinateList {
    HKValueRange * _chartableDateRange;
    NSArray * _subCoordinates;
}

- (void).cxx_destruct;
- (id)_coordinatesInChartableRange:(id)arg1;
- (void)_enumerateCoordinatesWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 chartableDateRange:(id)arg2 roundToViewScale:(BOOL)arg3 block:(id /* block */)arg4;
- (int)_numCoordinatesInChartableRange:(id)arg1;
- (struct { int x1; int x2; })blockPathEnd;
- (struct { int x1; int x2; })blockPathStart;
- (id)coordinates;
- (void)enumerateCoordinatesWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 roundToViewScale:(BOOL)arg2 block:(id /* block */)arg3;
- (id)firstCoordinateWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 roundToViewScale:(BOOL)arg2;
- (id)initWithSubCoordinates:(id)arg1 chartableDateRange:(id)arg2;
- (id)lastCoordinateWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 roundToViewScale:(BOOL)arg2;
- (int)numCoordinates;

@end