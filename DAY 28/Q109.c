#include <stdio.h>
struct Book {
    int id;
    char name[50];
    char author[50];
};
int main() {
    struct Book b[100];
    int n = 0, choice, i;

    while (1) {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &b[n].id);

                printf("Enter Book Name: ");
                scanf(" %[^\n]", b[n].name);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", b[n].author);

                n++;
                break;

            case 2:
                printf("\nBook List:\n");
                for (i = 0; i < n; i++) {
                    printf("\nBook ID: %d", b[i].id);
                    printf("\nBook Name: %s", b[i].name);
                    printf("\nAuthor: %s\n", b[i].author);
                }
                break;

            case 3:
                return 0;

            default:
                printf("Invalid Choice!");
        }
    }
}