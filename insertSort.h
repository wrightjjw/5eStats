/* Sort an array of unsigneds using insertion sort */
void insertSort(unsigned* A, unsigned size) {
    for (unsigned i = 1; i < size; i++) {
        unsigned x = A[i];
        for (unsigned j = i - 1; j >= 0; j--) {
            if (A[j] > x) A[j + 1] = A[j];
        }
    }
}