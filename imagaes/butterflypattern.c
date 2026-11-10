#include <stdio.h>
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 1; i <= (n + 1) / 2; i++) {
        for (int j = 1; j <= i; j++) printf("*");
        for (int j = 1; j <= n - 2 * i; j++) printf(" ");
        for (int j = 1; j <= i; j++) {
            if (j == (n + 1) / 2 && n == 2 * i - 1) continue;
            printf("*");
        }
        printf("\n");
    }
    for (int i = (n - 1) / 2; i >= 1; i--) {
        for (int j = 1; j <= i; j++) printf("*");
        for (int j = 1; j <= n - 2 * i; j++) printf(" ");
        for (int j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
    return 0;
}
