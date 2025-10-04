#include <stdio.h>

struct Book {
    char title[20];
    char author[20];
    float price;
};

int main() {
    struct Book b;
    printf("Enter book title (one word): ");
    scanf("%s", &b.title);
    printf("Enter author name (one word): ");
    scanf("%s", &b.author);
    printf("Enter book price: ");
    scanf("%f", &b.price);

    printf("\nBook Details:\n");
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);

    return 0;
}