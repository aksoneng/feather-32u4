#ifndef _FEATHER_H_
#define _FEATHER_H_

#include <Adafruit_SleepyDog.h>
#include "Arduino.h"

#define LED_BUILTIN   13
#define PIN_VBAT      A9
#define WD_MAX        8000      //Max sleep time to avoid watchdog reset

#define PIN_RFM96_NSS 8
#define PIN_RFM96_IO0 7

void led_on();
void led_off();

float battery_voltage();
void sleep(int sleep_ms);

#endif
