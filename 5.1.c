#include <stdio.h>

void sum(int* arr, int size, int* suma)
{
	for(int i = 0; i < size; i++)
	{
		*suma += arr[i];
	}
	printf("%d\n",*suma);
}

int main()
{
	int suma = 0;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	sum(&arr, 10, &suma);
	printf("%d\n", suma);
}
