#include <stdio.h>
#include <stdlib.h>
#include "customer.h"
#include "item.h"
#include "bill.h"

int main() {
    struct Customer customer;
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

    storeCustomer(&customer);
   
    float total = enterItems(items, quantities, &numItems);
   
    printBill(customer, items, quantities, numItems, total);

    return 0;
}
