#include <stdio.h>

int main(){

    int i,n,j;
    char alfabet='A';
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        for(j=0; j<i; j++){
            printf("%c ",alfabet);
            alfabet++;
        }
        printf("\n");
    }

    return 0;
}