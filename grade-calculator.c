#include <stdio.h>

int main(){
    int s1, s2, s3, avg;

    printf("Enter your 3 Subject marks from 100 : ");
    scanf("%d %d %d", &s1, &s2, &s3);

    avg = (s1 + s2 + s3) / 3;

    printf("Your Average is : %d\n", avg);

    if(avg >= 90){
        printf("Excellent Your Grade is : A+");
    } else if(avg >= 80 && avg < 90){
        printf("Very Good Your Grade is : A");
    } else if(avg >= 70 && avg < 80){
        printf("Good Your Grade is : B");
    } else if(avg >= 60 && avg < 70){
        printf("You can improve Your Grade is : C");
    } else if(avg >= 50 && avg < 60){
        printf("You need to work hard Your Grade is : D");
    } else if(avg >= 35 && avg < 50){
        printf("Your grade is : F");
    } else if (avg >= 0 && avg < 35){
        printf("Fail");
    }

    return 0;
}