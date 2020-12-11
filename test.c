#include <string.h>
#include <stdio.h>

void write_in_array (int arr[], int index, int value){
	arr[index]=value;
}

int main(){
	int test_arr[10] = {1, 10, 100, 1000, 2, 20, 200, 2000, 300, 30};

	write_in_array(test_arr, 3, 3);

	for(int i=0; i<10; ++i){
		printf("%d \n", test_arr[i]);
	}
}


