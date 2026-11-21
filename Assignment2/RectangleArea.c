#include <stdio.h>
long long rectangleArea(long long length, long long width) {
    if (length < 0 || width < 0) {
        return 0;
    }
    return length * width;
}
int main() {
    long long length, width;
    if (scanf("%lld %lld", &length, &width) == 2) {
        printf("%lld\n", rectangleArea(length, width));
    }
    return 0;
}