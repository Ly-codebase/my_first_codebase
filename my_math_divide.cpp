#include<stdio.h>
#include "my_math.h"

int divide(int numerator, int denominator) {
    if(denominator == 0) {
        return -1;
    } else {
        return numerator / denominator;
    }
}
