#include <stdio.h>
#include <stdlib.h>

int compare_int_asc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int compare_double_desc(const void *a, const void *b) {
    if (*(double *)a < *(double *)b) return 1;
    else if (*(double *)a > *(double *)b) return -1;
    else return 0;
}

int compare_char_asc(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

int main(void) {
    int array1[8] = {67, 98, 23, 11, 47, 13, 94, 58};
    double array2[8] = {-6.4, 2.65, 32.745, -3.9, 2.2, 11.742, -23.523, 0.0};
    char array3[8] = {'a', 'G', '?', 'm', '#', 'B', 'n', '%'};

    qsort(array1, 8, sizeof(int), compare_int_asc);
    printf("Sorted array1 in ascending order: ");
    for (int i = 0; i < 8; i++) {
        printf("%d ", array1[i]);
    }
    printf("\n");

    qsort(array2, 8, sizeof(double), compare_double_desc);
    printf("Sorted array2 in descending order: ");
    for (int i = 0; i < 8; i++) {
        printf("%.3lf ", array2[i]);
    }
    printf("\n");

    qsort(array3, 8, sizeof(char), compare_char_asc);
    printf("Sorted array3 in ascending order: ");
    for (int i = 0; i < 8; i++) {
        printf("%c ", array3[i]);
    }
    printf("\n");

    return 0;
}