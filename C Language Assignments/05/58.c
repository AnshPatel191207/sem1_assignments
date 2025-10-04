#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        if (i == n / 2) {
            printf("%d", j + 1);
        }
        else if (j == n / 2) {
            printf("%d", (n / 2) + 1);
        }
        else {
            printf(" ");
        }
        }
        printf("\n");
    }

    return 0;
}