#include <stdio.h>

struct dot_t {
	int x;
	int y;
};
typedef struct dot_t dot;

int line(dot d1, dot d2, dot d3) {
	int i = 0;
	
	if(d1.x == d2.x){if(d2.x == d3.x){i = 1;}}
	if(d1.y == d2.y){if(d2.y == d3.y){i = 1;}}
	if(((d2.y-d1.y)*(d3.x-d2.x))==((d3.y-d2.y)*(d2.x-d1.x))){i = 1;}
	
	return i;
}

dot sbor(dot d1,dot d2){
	
	int x;
	int y;
	x = (d1.x + d2.x);
	y = (d1.y + d2.y);
	dot d3 = {x, y};
	
	return d3;
}

int main(){
		
	dot p1 = {1, 2};
	dot p2 = {2, 4};
	dot p3 = {3, 6};
	
	if(line(p1,p2,p3)){printf("kur\n");}
	
	dot p4 = sbor(p1, p2);
	printf("x=%d, y=%d \n",p4.x ,p4.y);
}
