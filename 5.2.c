#include <stdio.h>

void avrg(float* arr, int size, float* avg)
{
    for(int i = 0; i < size; i++)
	{
		*avg += arr[i];
	}
	*avg /= size;
    printf("%f\n",*avg);
}

int main()
{
    float avg = 0;
	float arr[10] = {1,2,3,4,5,6,7,8,9,10};
	avrg(&arr, 10, &avg);
	printf("%f\n", avg);
}
