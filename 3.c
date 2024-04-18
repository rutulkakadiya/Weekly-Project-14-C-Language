//  **Question 3: Largest among Three Numbers**
//    Develop a C program that takes three numbers as input and finds the largest among them.

#include <stdio.h>

main()
{

    int a, b, c;

    printf("Enter the value of a=");
    scanf("%d", &a);
    
    printf("Enter the value of b=");
    scanf("%d", &b);
    
    printf("Enter the value of c=");
    scanf("%d", &c);

    if(a > b){
        if(a>c){
            printf("A is big %d",a);
        }
        else{
            printf("C is big %d",c);
        }
    }
    else if(b>c){
        printf("B is big %d",b);
    }
    else{
        printf("C is big",c);
    }
}
