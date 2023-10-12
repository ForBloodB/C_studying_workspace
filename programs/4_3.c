#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define NUM 100

int main(void){

    int array[NUM];
    int i = 0 , j = 0 , key;

    srand(time(0));
    for( ; i < NUM ; i++){
        array[i] = rand();
    }


    for(int k = 0; k < NUM ; k++){
        printf("%d \n" , array[k]);
    }

    printf("please in put the 'key':");
    scanf("%d" , &key);

    for( ; j < NUM ; j++ ){            
        if(array[j] == key){
            break;
        }
        else{
            continue;
        }
    }

    if(j <= 9){
        printf("the 'key' is NO.%d number.\n" , j+1);
    }
    else{
        printf("there is no the 'key'.\n");
    }

    _getch();
    return 0;
}