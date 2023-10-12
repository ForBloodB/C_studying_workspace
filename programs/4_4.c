#include<stdio.h>
#define NUM 120

int main(void){

    int statistics[NUM] , month[12] = {0,0,0,0,0,0,0,0,0,0,0,0};
    int i = 0 , j = 0 , k = 0;
    
    for( ; i < NUM ; i++){
        printf("please input the month which NO.%d employee brithed in:" , i+1);
        scanf("%d",&statistics[i]);
    }

    for( ; j < NUM ; j++){
        switch (statistics[j])
        {
        case 1:month[0]++; break;
        case 2:month[1]++; break;
        case 3:month[2]++; break;
        case 4:month[3]++; break;
        case 5:month[4]++; break;
        case 6:month[5]++; break;
        case 7:month[6]++; break;
        case 8:month[7]++; break;
        case 9:month[8]++; break;
        case 10:month[9]++; break;
        case 11:month[10]++; break;
        case 12:month[11]++; break;

        default:printf("error!\n");  break;
        }
    }

    printf("\n\n\n");

    for( ; k < 12 ; k++){
        printf("employees who brithed in NO.%d month:%d \n" , k+1 , month[k]);
    }

    _getch();
    return 0;
}