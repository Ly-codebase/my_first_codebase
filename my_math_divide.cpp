#include<stdio.h>
#include "my_math.h"

double divide(double numerator, double denominator) {
    if(denominator == 0) {
        return -1;
    } else {
        return numerator / denominator;
    }
}