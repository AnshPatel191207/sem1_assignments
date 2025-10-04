#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int min = i;
            if (j < min) min = j;
            if (n - 1 - i < min) min = n - 1 - i;
            if (n - 1 - j < min) min = n - 1 - j;

            printf("%d", min + 1);
        }
        printf("\n");
    }

    return 0;
}