#include<stdio.h>
int factorial(int x)
{
    int result = 1;
    for(int i=1;i<=x;i++)
    {
        result *= i;
    }
    return result;
}


int main()
{
    int i;
    //take value of i from user
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &i);
    //calculate factorial of i  
    int result = factorial(i);  
    printf("The factorial of %d is %d\n", i, result);
    return 0;
    
}

