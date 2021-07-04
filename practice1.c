#include<stdio.h>

int main()
{
    int a = 0,
        b = 0,
        c = 0,
        d = 0;
    // always init your variables
    
    printf("Enter first number : ");
    scanf("%d", &a);
    
    printf("Enter second number : ");
    scanf("%d", &b);
    
    printf("Enter third number : ");
    scanf("%d", &c);
    
    printf("Enter last number : ");
    scanf("%d", &d);
   // always take consecutive input in different lines to avoid buffer overflow
    
    if(a > b)
    {  
        if(a > c)
        {
            if(a > d)
            {
                printf("%d is the greatest number.\n", a);
            }
            else
            {
                printf("%d is the greatest number.\n", d);
            }
        }
    }
    else if (b > c)
    {
        if(b > d)
        {
            printf("%d is the greatest number.\n", b);
        }
        else 
        {
            printf("%d is the greatest number.\n", d);
        }
    }
    else if(c > d)
    {
        printf("%d is the greatest number. ", c);
    }
    else 
    {
        printf("%d is the greatest number.", d);
    }
    
    return 0;   
}
