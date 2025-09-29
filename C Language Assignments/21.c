#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j < i; j++){
            printf(" ");
        }
        for(int k=1; k<= n-i+1; k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}