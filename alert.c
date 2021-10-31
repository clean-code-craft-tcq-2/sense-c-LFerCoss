#include "alert.h"


void check_and_alert(const float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats){

    if (computedStats.max > maxThreshold){

        emailAlerter();//alerters[0]();

        ledAlerter();//alerters[1]();
    }
}

void emailAlerter(){

    emailAlertCallCount = 1;

}

void ledAlerter(){

    ledAlertCallCount = 1;

}