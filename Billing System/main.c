#include <stdio.h>
#include "customer.h"
#include "item.h"
#include "bill.h"

int main() {
    struct Customer customer;
    struct Item items[10] = {
        {1, "Rice (1 kg)", 50},
        {2, "Wheat Flour (1 kg)", 30},
        {3, "Sugar (1 kg)", 40},
        {4, "Lentils (Dal, 1 kg)", 80},
        {5, "Cooking Oil (1 liter)", 100},
        {6, "Milk (1 liter)", 60},
        {7, "Eggs (1 dozen)", 50},
        {8, "Potatoes (1 kg)", 20},
        {9, "Onions (1 kg)", 30},
        {10, "Tomatoes (1 kg)", 40}
    };
    int quantities[10];
    int numItems;

    storeCustomer(&customer);
   
    float total = enterItems(items, quantities, &numItems);
   
    printBill(customer, items, quantities, numItems, total);

    return 0;
}
