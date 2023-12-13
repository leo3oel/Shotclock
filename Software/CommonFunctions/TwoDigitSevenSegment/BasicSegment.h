#ifndef BASICSEGMENT_H
#define BASICSEGMENT_H

class Segment
{
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual void setLedSettings(short color, short brightness) = 0;
    virtual ~Segment() {}
};

class BasicSegment : public Segment
{
private:
    short segmentLength;
    short startLed;
    short brightness = 150;
    short color = 0;
    bool state;

public:
    BasicSegment();
    BasicSegment(short startLed, short segmentLength);
    void turnOn();
    void turnOff();
    void setLedSettings(short color, short brightness);
};

#endif
