#include <stdio.h>
#include<stdlib.h>
#include "customer.h"
#include "item.h"
#include "bill.h"


int main() {
    

    int quantities[10];
    int numItems=10;
    struct Item *items = malloc(numItems * sizeof(struct Item));
    if (items == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    items[0] = (struct Item){1, "Rice (1 kg)", 50};
    items[1] = (struct Item){2, "Wheat Flour (1 kg)", 30};
    items[2] = (struct Item){3, "Sugar (1 kg)", 40};
    items[3] = (struct Item){4, "Lentils (Dal, 1 kg)", 80};
    items[4] = (struct Item){5, "Cooking Oil (1 liter)", 100};
    items[5] = (struct Item){6, "Milk (1 liter)", 60};
    items[6] = (struct Item){7, "Eggs (1 dozen)", 50};
    items[7] = (struct Item){8, "Potatoes (1 kg)", 20};
    items[8] = (struct Item){9, "Onions (1 kg)", 30};
    items[9] = (struct Item){10, "Tomatoes (1 kg)", 40};


    
    char username[256];
    char password[256];
    int choice;
    int flag=0;

    printf("1. Register\n2. Login\nChoose an option: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter username: ");
        scanf("%s", username);
        printf("Enter password: ");
        scanf("%s", password);

        store_user(username, password);
        printf("User registered successfully!\n");
    } else if (choice == 2) {
        printf("Enter username: ");
        scanf("%s", username);
        printf("Enter password: ");
        scanf("%s", password);

        if (check_user(username, password)) {
            printf("Login successful!\n");
        } else {
            printf("Invalid username or password.\n");flag=1;
        }
    } else {
        printf("Invalid choice.\n");
    }
    if(flag==0)
    {
        printf("1.Rice (1 kg): Rs 50\n2.Wheat Flour (1 kg): Rs 30\n3.Sugar (1 kg): Rs 40\n4.Lentils (Dal, 1 kg): Rs 80\n5.Cooking Oil (1 liter): Rs 100\n6.Milk (1 liter): Rs 60\n7.Eggs (1 dozen): Rs 50\n8.Potatoes (1 kg): Rs 20\n9.Onions (1 kg): Rs 30\n10.Tomatoes (1 kg): Rs 40\n");
        float total = enterItems(items, quantities, &numItems);
        printBill(username, items, quantities, numItems, total);
    }
    else
    printf("Try again");
    return 0;
}
