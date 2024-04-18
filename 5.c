// **Question 5: Pass/Fail**
//    Design a C program that takes a student's marks as input and prints "Pass" if the marks are greater than or equal to 40; otherwise, print "Fail."

#include<stdio.h>

main(){
    
    int mark;

    printf("Enter the student`s mark=");
    scanf("%d",&mark);

    if(mark >= 40){
        printf("Pass %d",mark);
    }
    else{
        printf("Fail %d",mark);
    }
}