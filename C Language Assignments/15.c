#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 0; j <= 2 * i - 1; j++){
            if(j<i){printf("%c ", 'A' + j);}
            else{printf(" ");}
        }
        printf("\n");
    }
    return 0;
}