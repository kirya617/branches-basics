#include "func.h"

int main()
{
    int array[100] = {10, 15, 5, 4, 21, 7};

    bubble_sort(array, 6);

    int i;
    for (i = 0; i < 6 ; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

