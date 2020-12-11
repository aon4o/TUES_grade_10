#include <stdio.h>


void kur1(){
	int x;
	printf("napishi chislo -> ");
	scanf("%d",&x);
	printf("%d\n",*(int*)x);
}
void kur2(){
	
	int a;
	int n;
	printf("napishi adres -> ");
	scanf("%d",&a);
	printf("napishi chislo -> ");
	scanf("%d",&n);
	
	*(int*)a = n;
	printf("%d",*(int*)a);
}



int main(){
	kur2();
}


