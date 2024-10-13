#include<stdio.h>
#include <limits.h>
#include "my_math.h"

int is_overflow2(long long a, long long b) {
    if ((b > 0 && a < LLONG_MIN + b) || (b < 0 && a > LLONG_MAX + b)) {
        return 1;  
    }
    return 0;  
}
 
long long subtraction(long long a, long long b) {
    if (is_overflow2(a, b)) {
        printf("Error: subtraction operation causes overflow.\n");
        return LLONG_MIN; 
    } else {
        return a - b;
    }
}
