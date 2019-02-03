#include "insertSort.h"
#include <stdio.h>
#include <assert.h>

void testInsertSort() {
    printf("Begin the test.\n");
    unsigned a1[3] = {3, 2, 1};
    printf("Sorting... ");
    insertSort(a1, 3);
    printf("Sort complete.\n");
    assert (a1[0] == 1);
    printf("Tests passed!\n");
}