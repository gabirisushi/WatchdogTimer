#include "WatchdogTimer.h"
 
WatchdogTimer::WatchdogTimer(float seconds)
{
    //Configure watchdog timer
    //HALT_Pause: Pause watchdog when debugger stops phone connection
    //Sleep_Run: Continue running watchdog when phone connections cease
    NRF_WDT->CONFIG = (WDT_CONFIG_HALT_Pause << WDT_CONFIG_HALT_Pos) | ( WDT_CONFIG_SLEEP_Run << WDT_CONFIG_SLEEP_Pos);
    
    //Set watchdog timeout (seconds * clock cycle)
    NRF_WDT->CRV = seconds * (float)NRF_CLK_RATE;
    
    //Enable reload register 0
    NRF_WDT->RREN = WDT_RREN_RR0_Enabled << WDT_RREN_RR0_Pos;
    
    //Start the watchdog timer
    NRF_WDT->TASKS_START = 1;
}
 
void WatchdogTimer::kick()
{
    //Reload register 0
    NRF_WDT->RR[0] = WDT_RR_RR_Reload;
}