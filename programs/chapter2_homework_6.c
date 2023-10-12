#include<stdio.h>
#include<stdlib.h>

int main(void){
    int ch , ch_ASCLL[1000] , i = 0, bool = 1 , index;

    while(1){
        ch = getchar();

        if(bool == 1){
            bool = 0;
            ch_ASCLL[i] = ch - 32;
        }
        else{
            ch_ASCLL[i] = ch;
        }

        if(ch == 32){
            bool == 1;
        }
        else if(ch == '\n'){
            break;
        }

        i++;
    }

    for(int n = 0 ; n < i ; n++){
        if(ch_ASCLL[n] <= 90 ){
            for(int j=i;j>=index;j--){
            ch_ASCLL[j+1]=ch_ASCLL[j];
            }
            ch_ASCLL[n] = 32;
            i++;
        }
    }

    printf("\n");
    for(int k = -1; k <= i; k++){
    printf("%c" , ch_ASCLL[k]);
    }

    system("pause");
    return 0;
}