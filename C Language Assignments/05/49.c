#include <stdio.h>

int main() {
    int n, num = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%c ", num+64);
            num++;
        }
        printf("\n");
    }

    return 0;
}