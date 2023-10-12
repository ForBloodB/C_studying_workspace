//写一百个数太困难了，用五个数代替一下

#include<stdio.h>

int main(void){
    int integer,sum = 0 , n = 0, i = 1;
    double fin;


    while(i <= 5){
    printf("please input a integer:");
    scanf("%d",&integer);
        if(integer % 2 == 0){
            sum = sum + integer;
            n = n + 1;
        }
    i = i + 1;
    }

    if(n != 0){
    fin = sum / n;
    printf("the averge of even numbers is %.2lf\n" , fin);
    }
    else{
        printf("no even number\n");
    }

    _getch();
    return 0;
}