#ifndef SEVENSEGMENT_H
#define SEVENSEGMENT_H

#include <Arduino.h>
#include "../Pin/pin.h"

class TwoDigitSevenSegment
{
private:
    short color, brightness, segmentLength;
    Pin dataPin;

public:
    TwoDigitSevenSegment(Pin dataPin, short segmentLength);
    void setNumber(short number);
    void clearDisplay();
    void setLedSettings(short color, short brightness);
};

#endif
