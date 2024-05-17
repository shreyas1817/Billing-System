#include <stdio.h>
#include <string.h>
#include "customer.h"


void store_user(const char *username, const char *password) {
    FILE *file = fopen("users.csv", "a");
    if (file == NULL) {
        perror("Could not open file");
    }

    fprintf(file, "%s,%s\n", username, password);
    fclose(file);
}

int check_user(const char *username, const char *password) {
    FILE *file = fopen("users.csv", "r");
    if (file == NULL) {
        perror("Could not open file");
        return 0;
    }

    char line[256];
    while (fgets(line, sizeof(line), file)) {
        char *stored_username = strtok(line, ",");
        char *stored_password = strtok(NULL, "\n");

        if (stored_username != NULL && stored_password != NULL) {
            if (strcmp(stored_username, username) == 0 && strcmp(stored_password, password) == 0) {
                fclose(file);
                return 1;
            }
        }
    }

    fclose(file);
    return 0;
}
