#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "testInsertSort.h"

static FILE* f;

unsigned* generateStats() {
    static unsigned stats[6];
    for (unsigned i = 0; i < 6; i++) {  // Six stats
        unsigned rolls[4];
        for (unsigned j = 0; j < 4; j++) { // Four rolls for each stat
            rolls[j] = rand() % 6 + 1;
        }
        insertSort(rolls, 4);
        stats[i] = rolls[0] + rolls[1] + rolls[2];
    }
    insertSort(stats, 6);
    return stats;
}

void print_stats(unsigned* A) {
    printf("%u %u %u %u %u %u\n", A[0], A[1], A[2], A[3], A[4], A[5]);
    if (f != NULL) fprintf(f, "%u %u %u %u %u %u\n", A[0], A[1], A[2], A[3], A[4], A[5]);
}

int main(int argc, char* argv[]) {
    time_t t;
    srand((unsigned) time(&t));
    unsigned loop;
    
    if (argc > 1) {
        // Number of loops:
        loop = atoi(argv[1]);
        // File:
        if (argc > 2) f = fopen(argv[2], "w");
            else f = NULL;
    } else loop = 1;

    #pragma omp parallel for
    for (unsigned i = 0; i < loop; i++)
        print_stats(generateStats());

    return 0;
}