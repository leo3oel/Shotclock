#include "BasicSegment.h"

BasicSegment::BasicSegment(short startLed, short segmentLength)
{
    this->startLed = startLed;
    this->segmentLength = segmentLength;
}

void BasicSegment::turnOff()
{
    state = false;
}

void BasicSegment::turnOn()
{
    state = true;
}

void BasicSegment::setLedSettings(short color, short brightness)
{
    this->color = color;
    this->brightness = brightness;
}