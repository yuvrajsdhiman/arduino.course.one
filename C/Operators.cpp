#include<stdio.h>
#define X 23
#define Y 12
#define Z 6

int main()
{
// Testing == operator
    if(X == Y)
    {
        printf("X is equal to Y\n");
    }
    else
    {
        printf("X is not equal to Y\n");
    }
// Testing < operator
   
    if(X < Y)
    {
        printf("X is less than Y\n");
    }
    else
    {
        printf("X is not less than Y\n");
    }

// Testing > operator
    
    if(X > Y)
    {
        printf("X is greater than Y\n");
    }
    else
    {
        printf("X is not greater than Y\n");
    }

// Testing != operator
    
    if(X != Y)
    {
        printf("X is not equal to Y\n");
    }
    else
    {
        printf("X is equal to Y\n");
    }

// Testing >= operator
    
    if(X >= Y)
    {
        printf("X is greater than or equal to Y\n");
    }
    else
    {
        printf("X is not greater than or equal to Y\n");
    }

// Testing <= operator
  
    if(X <= Y)
    {
        printf("X is less than or equal to Y\n");
    }
    else
    {
        printf("X is not less than or equal to Y\n");
    }

// Testing && operator  

    if(X<Y && Y<Z)
    {
        printf("X is less than Y and Y is less than Z\n");
    }
    else
    {
        printf("X is not less than Y and Y is not less than Z\n");
    }
  
// Testing || operator  

    if(X>Y || Y==Z)
    {
        printf("X is greater than Y or Y is equal to Z\n");
    }
    else
    {
        printf("X is not greater than Y and Y is not equal to Z\n");
    }

// Testing ! operator

    if(X>Y && !(X<Z))
    {
        printf("X is greater than Y and X is not less than Z\n");
    }
    else
    {
        printf("X is not greater than Y and X is not less than Z\n");
    }


}
    
    