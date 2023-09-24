#include<stdio.h>

int all_days(int month);
int month_days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int main(void){
    int input_month , days , which_day , month_day , j = 1 , i , k = 0;
    printf("please input month:");
    scanf("%d" , &input_month);
    days = all_days(input_month);
    month_day = month_days[input_month];
    which_day = (days)%7;//2023年1月1号是星期日

    printf("SUN  ");printf("MON  ");printf("TUE  ");printf("WED  ");printf("THU  ");printf("FRI  ");printf("SAT");
    printf("\n");

    i = which_day;
    while(month_day != 0){

        if(i == 0){
            k = which_day + k + 1;
            which_day = 0;
            
            if(k == 7){
            printf("%3d\n" , j);
            j++;
            month_day--;
            k = 0;
            }
            else{
            printf("%3d" , j);   
            printf("  ");
            j++;
            month_day--;
            }

        }
        else{
        printf("     ");
        i--;
        }


    }

    _getch();
    return 0;
}

int all_days(int month){
    int all_days = 0;
    int i = 0;

    for( ; i < month ; i++){
        all_days = all_days + month_days[i];
    }
    
    return all_days;
}