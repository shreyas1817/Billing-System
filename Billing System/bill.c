#include <stdio.h>
#include "bill.h"

void printBill(char username[], struct Item items[], int quantities[], int numItems, float total) {
    printf("\nCustomer Information:\n");
    printf("Name: %s\n", username);
    printf("\nTotal Bill: Rs%.2f\n", total);
}
