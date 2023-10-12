#include<stdio.h>
#include<math.h>

int certain_algorithm(int a , int n);
int main(viod){

    int a , n , k , i;
    long sum = 0;

    printf("please input a:");
    scanf("%d" , &a);
    printf("please input n:");
    scanf("%d" , &n);


    for(i = 1 ; i <= n ; i++){
        sum = sum + certain_algorithm(a , i);
    }

    printf("final sum:%ld" , sum);

    _getch();
    return 0;

}

int certain_algorithm(int a , int n){
    int added = 0;

    for(int j = 1;j <= n;j++){
        added = added + a * pow(10,j-1);
    }

    return added;
}