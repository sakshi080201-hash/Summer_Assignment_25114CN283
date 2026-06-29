#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact c[100];
    int n = 0, choice, i;

    while (1) {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Name: ");
                scanf(" %[^\n]", c[n].name);

                printf("Enter Phone Number: ");
                scanf("%s", c[n].phone);

                n++;
                break;

            case 2:
                printf("\nContact List:\n");
                for (i = 0; i < n; i++) {
                    printf("\nName : %s", c[i].name);
                    printf("\nPhone: %s\n", c[i].phone);
                }
                break;

            case 3:
                return 0;

            default:
                printf("Invalid Choice!");
            }
        }
    }