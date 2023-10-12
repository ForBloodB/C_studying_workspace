#include<stdio.h>

int multiple(int i);
int main(viod){

    long sum;
    int j = 1;

    for( ; 2*j <= 101 ; j++ ){
        sum = sum + multiple(j);
    }

    printf("fianl sum:%ld" , sum);
    _getch();
    return 0;

}

int multiple(int i){

    return (2*i-1)*2*i*(2*i+1);
}