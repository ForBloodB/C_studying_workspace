#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
    char string[1000];

    printf("input a sentence:");
    gets(string);

    for(int i = 1; i < strlen(string) ; i++){
        if(string[i-1] == ' ' && string[i] >= 97 && string[i] <= 122 ){
            string[i] = string[i] - 32;
        }

    }

    if(string[0] >= 97 & string[0] <= 122){
    string[0] = string[0] - 32;
    }

    printf("%s\n" , string);
    system("pause");
    return 0;
}