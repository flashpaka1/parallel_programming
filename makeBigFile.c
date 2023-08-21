#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 10000000
#define NUM_COUNT 10000

int main() {
    FILE* file = fopen("numbers.txt", "w");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    // Initialize random number generator
    srand(time(NULL));

    for (int i = 0; i < NUM_COUNT; i++) {
        int number = rand() % MAX_NUMBER + 1;
        fprintf(file, "%d\n", number);
    }

    fclose(file);
    printf("Numbers written to file successfully.\n");

    return 0;
}