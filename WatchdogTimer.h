#ifndef WATCHDOGTIMER_H
#define WATCHDOGTIMER_H
 
#include "mbed.h"
 
class WatchdogTimer
{
public:
    WatchdogTimer(float seconds);
 
    void kick();
 
private:
    static const uint16_t NRF_CLK_RATE = 32768; //32KHz
};
 
#endif // WATCHDOGTIMER_H
 