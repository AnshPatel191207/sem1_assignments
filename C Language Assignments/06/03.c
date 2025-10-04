#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[20];
    struct Date joiningDate;
};

int main() {
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name (one word): ");
    scanf("%s", &e.name);

    printf("Enter Joining Date (day month year): ");
    scanf("%d %d %d", &e.joiningDate.day,
                     &e.joiningDate.month,
                     &e.joiningDate.year);

    printf("\nEmployee Details:\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Joining Date: %.2d-%.2d-%.4d\n", e.joiningDate.day, e.joiningDate.month, e.joiningDate.year);

    return 0;
}