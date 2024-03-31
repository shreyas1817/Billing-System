#ifndef CUSTOMER_H
#define CUSTOMER_H

struct Customer {
    int id;
    char name[50];
    char contact[20];
};

void storeCustomer(struct Customer *customer);

#endif
