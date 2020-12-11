#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void smth(char* arr)
{
    for (int i = sizeof(arr); i-1 > 0; --i) {
        printf("%c", arr[i-1]);
    }
    printf("\n");
}

int main()
{
    char *arr = malloc(3 * sizeof(char));
    arr[1] = 'a';
    arr[2] = 's';
    arr[3] = 'd';

    smth(arr);

    free(arr);
    return 0;
}
