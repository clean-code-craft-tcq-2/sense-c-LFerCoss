#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    unsigned char index = 0;
    struct Stats s;





    s.average = 0;
    s.min = 0;
    s.max = 0;
    
    s.max = numberset[0]; 
    s.min = numberset[0];
    for (index = 0 ; index < setlength; index ++){
        s.average += numberset[index];
        if (numberset[index] >= s.max) {
            s.max = numberset[index];// Get Max Number 
        } 
        if (numberset[index] <= s.min){
            s.min = numberset[index]; // Get Min Number
        }  
    }
    s.average = s.average/setlength;// Average Calculation

    return s;
}

//int emailAlertCallCount = 0;
//int ledAlertCallCount = 0;