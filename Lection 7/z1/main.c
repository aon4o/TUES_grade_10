#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    int *arr;

    arr = malloc(10 * sizeof(int));

    for(int i = 0; i < 10; i++) {
        arr[i] = i;
        printf("%d %d\n", i, arr[i]);
    }

    memset(arr, -1, 10 * sizeof(int));

    for(int i = 0; i < 10; i++) {
        printf("%d %d\n", i, arr[i]);
    }

    free(arr);
    return 0;
}
