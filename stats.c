#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "testInsertSort.h"
int main() {
    testInsertSort();
    return 0;
}

void generateStats() {
    time_t t;
    srand((unsigned) time(&t));
    for (unsigned i = 0; i < 6; i++) {  // Six stats
        unsigned rolls[4];
        for (unsigned j = 0; j < 4; j++) { // Four rolls for each stat
            rolls[j] = rand() % 6 + 1;
            //TODO: Finish
        }
    }
}