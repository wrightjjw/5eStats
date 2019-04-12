#include "insertSort.h"
#include <stdio.h>
#include <assert.h>

void testInsertSort() {
    printf("Begin the tests... ");

    unsigned a1[3] = {3, 2, 1};
    insertSort(a1, 3);
    assert (a1[0] == 1);
    assert (a1[1] == 2);
    assert (a1[2] == 3);
    printf(" 0 ");

    unsigned a2[5] = {3, 1, 2, 7, 3};
    insertSort(a2, 5);
    assert (a2[0] == 1);
    assert (a2[1] == 2);
    assert (a2[2] == 3);
    assert (a2[3] == 3);
    assert (a2[4] == 7);
    printf (" 1 ");

    printf("Tests passed!\n");
}