#include <stdio.h>  
  
int main()  
{  
    int a, b, choice;  
  
    printf("Enter your choice\n");  
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n\n");  
    scanf("%d", &choice);  
  
    if(choice > 4)  
    {  
        printf("You entered wrong choice\n");  
    }  
    else  
    {  
        printf("Enter 2 integer numbers\n");  
        scanf("%d %d", &a, &b);  
    }  
  
  
    if(choice == 1)  
    {  
        printf("Addition of %d and %d is %d\n", a, b, (a+b));  
    }  
    else if(choice == 2)  
    {  
        printf("Subtraction of %d and %d is %d\n", a, b, (a-b));  
    }  
    else if(choice == 3)  
    {  
        printf("Multiplication of %d and %d is %d\n", a, b, (a*b));  
    }  
    else if(choice == 4)  
    {  
        if(b != 0)  
            printf("Division of %d and %d is %d\n", a, b, (a/b));  
        else  
            printf("Number can not be divided by 0\n");  
    }  
    else  
    {  
        printf("Please enter any of these no 1, 2, 3, 4\n");  
    }  
  
  
    return 0;  
}  