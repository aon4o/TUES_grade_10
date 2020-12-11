#include <stdio.h>
#include <stdlib.h>

func_1(int x){
    if (x < 0){
        printf("The num you enter must be better than ZERO!");
        return 0;
    }
    char y[100];
    itoa(x,y,10);

    printf("%s \n", y);
}

main(){
    int arr_2[] = {1,123,78};
    size_t n_2 = sizeof(arr_2)/sizeof(arr_2[0]);
    int i_2 = 0;
    while(i_2 < n_2){
        func_1(arr_2[i_2]);
        i_2++;
    }
}
