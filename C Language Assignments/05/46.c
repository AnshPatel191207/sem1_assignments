#include <stdio.h>

int main() {
    int n, odd = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%2d ", odd);
            odd += 2;
        }
        printf("\n");
    }

    return 0;
}