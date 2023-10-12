#include<stdio.h>

int main(viod){

    int i = 0;

    while(1){
        if(i % 5 == 1){
            if(i % 6 == 5){
                if(i % 7 == 4){
                    if(i % 11 == 10) break;
                }
            }
        }

        i++;
    }

    printf("共有%d名士兵" , i);

    _getch();
    return 0;

}