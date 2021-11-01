#include <math.h>

#ifndef STATS
    #define STATS
    struct Stats{
        float average;
        float min;
        float max;
    };
#endif

extern int emailAlertCallCount;
extern int ledAlertCallCount;

struct Stats compute_statistics(const float* numberset, int setlength);
