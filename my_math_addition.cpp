#include <stdio.h>
#include <limits.h>

// 检查long long相加是否溢出
int is_overflow1(long long a, long long b) {
    if ((b > 0 && a > LLONG_MAX - b) || (b < 0 && a < LLONG_MIN - b)) {
        return 1;  // 溢出
    }
    return 0;  // 未溢出
}

// 加法模块
long long addition(long long a, long long b) {
    if (is_overflow1(a, -b)) {
        printf("Error: addition operation causes overflow.\n");
        return LLONG_MAX;  // 返回最小值
    } else {
        return a + b;
    }
}

