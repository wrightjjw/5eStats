/* Sort an array of unsigneds using insertion sort */
void insertSort(unsigned* A, unsigned size) {
    char sorted = 0; // if the array is sorted or not
    while (!sorted) {

        unsigned sorts = 0; // number of sorts per search
        for (unsigned i = 0; i < size - 1; i++) {
            if (A[i] > A[i + 1]) {
                // swap elements
                unsigned x;
                x = A[i];
                A[i] = A[i + 1];
                A[i + 1] = x;

                sorts++;
            }
        }
        if (sorts < 0) sorted = 1;
    }
}