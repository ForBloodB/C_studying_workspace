#include<stdio.h>

void bubble(int a[]);
int swap(int *pa , int *pb);
int main(void){
    int number_package[4];
    printf("input 4 integers.\n");

    for(int i = 0 ; i <= 3 ; i++){
        printf("input NO.%d number:" , i + 1);
        scanf("%d" , &number_package[i]);
    }

    bubble(number_package);

    printf("\nThe largest number is %d.\nThe smallest number is %d." , number_package[3] , number_package[0]);

    _getch();
    return 0;
}


void bubble(int a[]){

    for(int i = 1 ; i < 4 ; i++){
        for(int j = 0 ; j < 4 - 1; j++){
            if(a[j] > a[ j + 1]){

                swap(&a[j] , &a[j + 1]);
            }
        }
    }



}

int swap(int *pa , int *pb){
    int t;
    t = *pa;
    *pa = *pb;
    *pb = t;
}