#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c ",j+64);
        }
            for(int k=i-1;k>=1;k--){
                printf("%c ",k+64);
            }
        
        printf("\n");
    }
    return 0;
}