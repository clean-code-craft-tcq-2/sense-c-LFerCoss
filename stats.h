#include <math.h>

    struct Stats{
        float average;
        float min;
        float max;
    };

struct Stats compute_statistics(const float* numberset, int setlength);
void emailAlerter();
void ledAlerter();

extern int emailAlertCallCount;
extern int ledAlertCallCount;