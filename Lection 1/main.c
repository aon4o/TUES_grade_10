#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//1
int get_from_array(int x[], int i){
    return x[i];
}
//2
void write_to_array(int x[], int y, int i){
    x[i] = y;
}
//3 not done
//4
void dali_deli (int x, int y){
    int n = x % y;
    if (n==0) {printf("%d e delitel na %d.",y,x);}
    else {printf("%d NE e delitel na %d.",y,x);}
}
//5
void dali_deli_masiv (int x[], int y){

    int i = 0;
    int n = 1;
    while (i <= 10){
        if (x[i]%y!=0){
            n=0;
        }
        i++;
    }
    if(n==1){
        printf("%d e delitel na elementite na masiva.",y);
    }else{
        printf("%d NE e delitel na elementite na masiva.",y);
    }
}
//6
void sreden_uspeh (float x[]){
    float n = 0;
    int i = 0;
    while(i<10){
        n += x[i];
        i++;
    }
    n /= 10;
    printf("Sredniqt uspeh e -> %f",n);
}
//7
void naj_malko (int x[]){
    int i = 1;
    int m = x[0];
    while(i <= 10){
        if (m > x[i]){
            m = x[i];
        }
        i++;
    }
    printf("Naj-malkoto chislo w masiva e %d",m);
}
//8
//nqma pyk
//9
int tyrsi (int x[], int y){
    int i = -1;
    int z = 0;
    while(z < 10){
        if(x[z]==y){i=z;}
        z++;
    }
    return i;
}
//10
int char_to_int(char c) {
    int x = ((int)(c))-48;
    return x;
}
//11
float math(float x, float y ,char n){
    float a;
    switch(n){
        case '+': a = x + y; break;
        case '-': a = x - y; break;
        case '*': a = x * y; break;
        case '/': a = x / y; break;
    }
    return a;
}
//12
int search(int x, int y){
    char str[10];
    itoa(x, str, 10);

    int answer = 0;
    int br = 0;
    while(br < 10){
        if((((int)(str[br]))-48)==y){answer++;}
        br++;
    }
    return answer;
}
//13 кеох
void concat(char x[],char y[]){
    char c[64] = "";
    int i = 0;
    int n = 0;
    while(x[n] != '\0'){
        c[i] = x[n];
        i++;
        n++;
    }
    n = 0;
    while(y[n] != '\0'){
        c[i] = y[n];
        i++;
        n++;
    }
    printf("%s", c);
}



int main()
{
    return 0;
}
