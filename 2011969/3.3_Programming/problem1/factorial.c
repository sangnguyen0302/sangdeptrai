#include<stdio.h>
#include"factorial.h"

int factorial(const int aNumber){
    if(aNumber<0){
        printf("Invalid input number");
        return 0;
    }else if(aNumber==0)return 1;
    return aNumber*factorial(aNumber-1);
}

int main(){
    printf("%d",factorial(10));
}