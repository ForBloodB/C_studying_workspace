#include<stdio.h>

int main(void){
    int i = 0 , j = 1;

    printf("%3d,%3d," , i , j);
    for(int k = 1 ; k <= 18 ; k++){
        if(k%2 == 1){
            i = i + j;
            printf("%3d," , i);
        }
        else if(k%2 == 0){
            j = i + j;
            if(k != 18) printf("%3d," , j);
            else printf("%3d" , j);
        }
    }

    _getch();
    return 0;

}