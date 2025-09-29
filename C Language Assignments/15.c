#include <stdio.h>
int main() {
    int n, i, j, k;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for(j = 1; j<= 2*(n-i); j++){
            printf(" ");
        }
        for(k=1; k<=2*i-1; k++){
            printf("%c ", k+64);
        }
        printf("\n");
    }
    return 0;
}