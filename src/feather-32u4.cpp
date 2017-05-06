#include <feather-32u4.h>

void led_on(){
    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN, HIGH);
}

void led_off(){
    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN, LOW);
}

float battery_voltage(){
  return analogRead(PIN_VBAT)/1024.0*6.6;
}

void sleep(unsigned long sleep_ms) {
    unsigned long sleepMS =0;

    while(sleepMS <sleep_ms) {
        sleepMS +=Watchdog.sleep(min(sleep_ms -sleepMS, WD_MAX));
    }
}
