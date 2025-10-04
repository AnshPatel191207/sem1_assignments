#include <stdio.h>

int main() {
    int i,j,k,n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("  ");
        }
        for (k = 1; k <= 2 * (n - i) + 1; k++) {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}