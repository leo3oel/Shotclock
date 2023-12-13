#include "SingleDigitSevenSegment.h"

SingleDigitSevenSegment::SingleDigitSevenSegment(short startLed, short segmentLength)
{
    initializeSegments(startLed, segmentLength);
}

SingleDigitSevenSegment::SingleDigitSevenSegment(
    short startLed, short segmentLength, char* segmentsOrder
)
{   
    initializeSegments(startLed, segmentLength);
    this->segmentsOrder = segmentsOrder;
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
