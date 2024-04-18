// **Question 1: Positive or Negative**
//    Write a C program to input a number and determine whether it's positive, negative, or zero.

#include<stdio.h>

main(){
    int number;

    printf("Enter the number=");
    scanf("%d",&number);

    if(number==0){
        printf("Zero %d",number);
    }
    else if(number > 0){
        printf("Positive %d",number);
    }
    else{
        printf("Negative %d",number);
    }
}