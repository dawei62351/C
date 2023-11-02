//
// Created by Dawei Zhao on 10/30/23.
// f to c conversion
//
#include "stdio.h"
int main() {
    float f, c;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 1;
    f = lower;
    while (f <= upper) {
        c = (f - 32.0) * (5.0 / 9.0);
        printf("%3.0f %6.1f\n", f, c);
        //3 digit before the decimal point and 0 digit after
        //6 before and 1 after
        f = f + step;
    }
    for (f=0; f<=300; f=f+1)
        printf("%3.0f %6.1f\n", f, (f - 32.0) * (5.0 / 9.0));
    return 0;
}