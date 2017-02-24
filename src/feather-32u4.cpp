#include "feather-32u4.h"
#include "Arduino.h"

float battery_voltage(){
  return analogRead(PIN_VBAT)/1024.0*6.6;
}
