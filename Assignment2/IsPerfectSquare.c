#include <stdio.h>
int isPerfectSquare(long long n) {
    if (n < 0) {
        return 0;
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    long long low = 1, high = n / 2;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (mid <= n / mid) {
            if (mid * mid == n) {
                return 1;
            }
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return 0;
}
int main() {
    long long n;
    if (scanf("%lld", &n) == 1) {
        printf("%d\n", isPerfectSquare(n));
    }
    return 0;
}