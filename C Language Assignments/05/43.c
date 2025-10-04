#include <stdio.h>

int main(){

    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=cols; j++){
            if(j==1||j==cols||i==1||i==rows){
                printf("%d",j);
            }
            else{printf(" ");}
        }
        printf("\n");
    }

    return 0;
}