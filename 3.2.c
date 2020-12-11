#include<stdio.h>

struct dot_t {
	int x;
	int y;
};
typedef struct dot_t dot;

struct prava_t{
	dot p1;
	dot p2;
};
typedef struct prava_t prava;

double kur(prava l){
	double m = ((l.p2.y - l.p1.y)/(l.p2.x - l.p1.x));
	return m;
}
void usp(prava l1, prava l2){
	if (kur(l1)==kur(l2)) {
		printf("Pravite sa usporedni! \n");
	} else {printf("Pravite se presichat! \n");}
}

int main(){
	prava l1;
	l1.p1.x = 1;
	l1.p1.y = 2;
	l1.p2.x = 2;
	l1.p2.y = -6;

	prava l2;
	l2.p1.x = 2;
	l2.p1.y = 4;
	l2.p2.x = 5;
	l2.p2.y = -12;

	printf("%f\n",kur(l1));
	printf("%f\n",kur(l2));
	usp(l1, l2);
}
