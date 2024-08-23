#include<stdio.h>

int main(){
    int n, year = 2024;

    printf("Enter N : ");
    scanf("%d", &n);

    year % 4 == 0 ? printf("Leap Year....") : printf("Not Leap year.....");

    if(n % 2 == 0){
        printf("Even Number.....");
    } else {
        printf("Odd Number.....");
    }

    return 0;
}