#ifndef ITEM_H
#define ITEM_H

#include "customer.h"

struct Item {
    int id;
    char description[50];
    float price;
};

float enterItems(struct Item items[], int quantities[], int *numItems);

#endif
