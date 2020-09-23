# WatchdogTimer
:clock: Generic BLE Hardware Watchdog timer for .ino, .cpp (should be compiled on mbed.os)

This is a Hardware Watchdog created mainly for Bluetooth devices. 

What is a Watchdog?
A watchdog timer is a piece of hardware that can be used to automatically detect software anomalies and reset the processor if any occur. 
Generally speaking, a watchdog timer is based on a counter that counts down from some initial value to zero. 
The embedded software selects the counter's initial value and periodically restarts it. 
If the counter ever reaches zero before the software restarts it, the software is presumed to be malfunctioning and the processor's reset signal is asserted. 
The processor (and the embedded software it's running) will be restarted as if a human operator had cycled the power.
