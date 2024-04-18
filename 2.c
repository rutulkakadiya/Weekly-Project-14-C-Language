// **Question 2: Odd or Even**
//    Create a C program to check whether a given integer is odd or even.


#include<stdio.h>

main(){
    int number;

    printf("Enter the number=");
    scanf("%d",&number);

    if(number==0){
        printf("Zero %d",number);
    }
    else if(number % 2 ==0){
        printf("Even number %d",number);
    }
    else{
        printf("Odd number %d",number);
    }
}