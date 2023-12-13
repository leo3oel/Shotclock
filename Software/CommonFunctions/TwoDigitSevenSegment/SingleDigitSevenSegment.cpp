#include "SingleDigitSevenSegment.h"

SingleDigitSevenSegment::SingleDigitSevenSegment(short startLed, short segmentLength)
    : segmentOrder(4,5,0,1,2,3,6)
{
    initializeSegments(startLed, segmentLength);
}

SingleDigitSevenSegment::SingleDigitSevenSegment(
    short startLed, short segmentLength, SegmentOrder segmentsOrder
)
{   
    initializeSegments(startLed, segmentLength);
    this->segmentOrder = segmentsOrder;
}

void SingleDigitSevenSegment::initializeSegments(short startLed, short segmentLength)
{
    for (short i=0; i<7; i++)
    {
        short currentStartLed = startLed + (i+1)*segmentLength;
        segments[i] = BasicSegment(currentStartLed, segmentLength);
    }
}

void SingleDigitSevenSegment::setNumber(short number)
{

}
