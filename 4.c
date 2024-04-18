// **Question 4: Leap Year Check**
//    Write a C program to check if a given year is a leap year or not.

#include<stdio.h>

main(){
    int year;

    printf("Enter the year=");
    scanf("%d",&year);

    if(year % 4 == 0){
        printf("Leap year %d",year);
    }
    else{
        printf("Not leap year %d",year);
    }

}