#include "Import/Arduino-7Segment/TwoDigitSevenSegment.h"

#define LED_PIN 5
#define SEGMENT_LENGTH 5


TwoDigitSevenSegment shotClock = TwoDigitSevenSegment(LED_PIN, SEGMENT_LENGTH);

void setup()
{
}

void loop()
{
    shotClock.setNumber(15);
    delay(100);
    shotClock.setNumber(44);
}