#include "two_digit_seven_segment.h"

TwoDigitSevenSegment::TwoDigitSevenSegment(Pin dataPin, short segmentLength)
    : dataPin(dataPin), segmentLength(segmentLength)
{
}

void TwoDigitSevenSegment::setNumber(short number)
{
}

void TwoDigitSevenSegment::clearDisplay()
{
}

void TwoDigitSevenSegment::setLedSettings(short color, short brightness)
{
    this->color = color;
    this->brightness = brightness;
}