#include <stdio.h>

int main(){

    int i,j,n;
    printf("Enter a no.: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        for(int j=1; j<=2*n-1; j++){
            if(i==1||i==j||i+j==n+5){
                printf("*");}
            else{printf(" ");}
            }
            printf("\n");
        }

    return 0;
}


// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for (int i = n; i >= 1; i--) {
//         for (int j = 1; j <= n - i; j++) {
//             printf(" ");
//         }
//         for (int j = 1; j <= 2 * i - 1; j++) {
//             if (j == 1 || j == 2 * i - 1 || i == n) {
//                 printf("*");
//             } else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }