#include <stdio.h>
#include <string.h>
#include "customer.h"

void storeCustomer(struct Customer *customer) {
    char cust[50];
    printf("Enter your name: ");
    scanf("%s", cust);
    char num[10];
    printf("Enter phone number: ");
    scanf("%s", num);
    customer->id = 1;
    strcpy(customer->name, cust);
    strcpy(customer->contact, num);
}
