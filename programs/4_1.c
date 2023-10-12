#include <stdio.h>
#define NUM 6
main(){
int value[NUM];
int i , temp;
printf("\nEnter %d integers: \n", NUM);

for (i=0;i<NUM; i++){
    scanf("%d" , &value[i]);}
for (i=0; i<NUM; i++){
    printf("%4d",value[i]);}

printf("\n");
for (i=0; i<NUM/2; i++) {temp = value[i]; value[i] = value[NUM-i-1]; value[NUM-i-1] = temp;}
for (i=0; i<NUM; i++){printf("%4d",value[i]);}

_getch();
_getch();
_getch();_getch();_getch();_getch();
return 0;
}