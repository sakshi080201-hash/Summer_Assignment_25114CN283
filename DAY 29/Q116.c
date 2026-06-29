#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item item[100];
    int n = 0, choice, i, id;

    do {
        printf("\n===== Inventory Management System =====\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Item ID: ");
                scanf("%d", &item[n].id);

                printf("Enter Item Name: ");
                scanf("%s", item[n].name);

                printf("Enter Quantity: ");
                scanf("%d", &item[n].quantity);

                printf("Enter Price: ");
                scanf("%f", &item[n].price);

                n++;
                printf("Item Added Successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No items available.\n");
                } else {
                    for(i = 0; i < n; i++) {
                        printf("\nID: %d", item[i].id);
                        printf("\nName: %s", item[i].name);
                        printf("\nQuantity: %d", item[i].quantity);
                        printf("\nPrice: %.2f\n", item[i].price);
                    }
                }
                break;

            case 3:
                printf("Enter Item ID to Search: ");
                scanf("%d", &id);

                for(i = 0; i < n; i++) {
                    if(item[i].id == id) {
                        printf("\nItem Found");
                        printf("\nName: %s", item[i].name);
                        printf("\nQuantity: %d", item[i].quantity);
                        printf("\nPrice: %.2f\n", item[i].price);
                        break;
                    }
                }
                if(i == n)
                    printf("Item Not Found!\n");
                break;

            case 4:
                printf("Exiting...");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}

These programs are written in C, are menu-driven, and are suitable for beginner-level practical exams and placement practice.