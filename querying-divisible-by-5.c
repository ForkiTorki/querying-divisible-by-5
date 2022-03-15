#include<stdio.h>
#include<stdlib.h>

int main(){

    int number;

    printf("Please enter a number that you want to query whether divisible by 5: ");
    scanf("%d",&number);

    if(number % 5 == 0){
        printf("Input number is divisible by 5");
    }else{
        printf("Input number is not divisible by 5");
    }

    return 0;
}