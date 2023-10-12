#include<stdio.h>

int main(viod){

    int i = 1;
    double n ;

    printf("%d\n" , sizeof(i));

    n = (double)i + 1.5;

    printf("%d %d %d %d\n" , sizeof(i) , sizeof(n) , sizeof((double)i) , n);

    _getch();
    return 0;

}