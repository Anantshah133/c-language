#include<stdio.h>

int main(){
    int n;

    printf("Enter N : ");
    scanf("%d", &n);

    if(n % 2 == 0){
        printf("Even Number.....");
    } else {
        printf("Odd Number.....");
    }

    return 0;
}