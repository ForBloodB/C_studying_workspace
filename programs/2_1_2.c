#include<stdio.h>

int all_days(int month);
int main(void){
    int input_month , days , which_day , j = 1;
    printf("please input month:");
    scanf("%d" , &input_month);
    days = all_days(input_month);
    which_day = (days - 1)%7;//2023年1月1号是星期日

    printf("SUN  ");printf("MON  ");printf("TUE  ");printf("WED  ");printf("THU  ");printf("FRI  ");printf("SAT");
    printf("\n");

    while(days != 0){
        switch (which_day){
        case 0:
        printf("%3d" , j);
        j++;
        days -= days;
 
        default:
        printf("   ");
        which_day--;
        }
        
        printf("  ");
    }

    _getch();
    return 0;
}

int all_days(int month){
    int month_days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int all_days = 0;

    for(int i = 0 ; i <= month ; i++){
        all_days = all_days + month_days[i];
    }

    return all_days;
}