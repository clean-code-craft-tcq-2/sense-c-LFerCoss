#include <math.h>
struct Stats{
    float average;
    float min;
    float max;
};

struct Stats compute_statistics(const float* numberset, int setlength);
