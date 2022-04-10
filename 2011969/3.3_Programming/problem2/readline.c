#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"readline.h"

int read_line(char *str){
    int j;
    j = strlen(str);
    while(j>0){
        if(str[j-1]<'0'||str[j-1]>'9')return 0;
        j--;    
    }
    return 1;
}

int main(){
    char str[50];
    gets(str);
    printf(read_line(str));
}