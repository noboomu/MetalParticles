//
//  AKAudioOutputRollingWaveformPlot.h
//  AudioKit
//
//  Created by Aurelius Prochazka on 2/8/15.
//  Copyright (c) 2015 Aurelius Prochazka. All rights reserved.
//

#import "AKPlotView.h"

/// A Rolling Waveform for of the audio output
IB_DESIGNABLE
@interface AKAudioOutputRollingWaveformPlot : AKPlotView

#if TARGET_OS_IPHONE
@property (nonatomic) IBInspectable UIColor *plotColor;
#else
@property (nonatomic) IBInspectable NSColor *plotColor;
#endif

@end
