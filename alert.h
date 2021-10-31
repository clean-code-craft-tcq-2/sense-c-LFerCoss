#include "stats.h"

typedef void (*alerter_funcptr)();
void check_and_alert(const float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);