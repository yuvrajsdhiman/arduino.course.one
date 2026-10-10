#include<stdio.h>
#include "maths.h"

int add(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}
int mul(int x, int y)
{
    return x * y;
}
int divide(int x, int y)
{
    return x / y;
}
int mod(int x, int y)
{
    return x %y;
}
int usub(int x, int y)
{   
 if(x > y)
    {
        return x - y;
    }
    else if(y > x)
    {
        return y - x;
    }
    else if(x == y)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

