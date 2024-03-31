#ifndef BILL_H
#define BILL_H

#include "customer.h"
#include "item.h"

void printBill(struct Customer customer, struct Item items[], int quantities[], int numItems, float total);

#endif
