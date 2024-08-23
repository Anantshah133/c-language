#include<stdio.h> 

int main(){
    int n;

    printf("Enter N : ");
    scanf("%d", &n);

    if( (n%3 == 0) && (n%5 == 0) ){
        printf("Divisible by both !");
    } else {
        printf("Not Divisible by both !");
    }
    return 0;
}

// && ||

// && 
// 11 = 1
// 10 = 0
// 01 = 0
// 00 = 0

// || 
// 11 = 1
// 10 = 1
// 01 = 1
// 00 = 0

// ^ Xor
// 11 = 0
// 10 = 1
// 01 = 1
// 00 = 0