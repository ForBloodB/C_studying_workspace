#include<stdio.h>

int main(void){
    double a , b , c;

    printf("x = ");
    scanf("%d" , &a);
    printf("y = ");
    scanf("%d" , &b);
    printf("z = ");
    scanf("%d" , &c);

    if(a + b == c){
        printf("x + y = z");
    }
    else{
        printf("x + y != z");
    }

    _getch();
    return 0;
}