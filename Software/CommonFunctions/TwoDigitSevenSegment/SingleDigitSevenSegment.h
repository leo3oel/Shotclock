#ifndef SINGLEDIGIT_H
#define SINGLEDIGIT_H

#include "BasicSegment.h"

class SingleDigitSevenSegment : public Segment
{
private:
    BasicSegment segments[7];
    char* segmentsOrder = new char[7]{'c', 'd', 'e', 'f', 'a', 'b', 'g'};

    void initializeSegments(short startLed, short segmentLength);

public:
    SingleDigitSevenSegment(short startLed, short segmentLength);
    SingleDigitSevenSegment(short startLed, short segmentLength, char* segmentsOrder);
    void setNumber(short number);
    void turnOff();
    void turnOn();
    void setLedSettings();
};

#endif
