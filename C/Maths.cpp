#include<stdio.h>
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
int div(int x, int y)
{
    return x / y;
}
int main()
{
    int c,d,e,f;
    c = add(5,10);
    d = sub(10,5);
    e=mul(10,5);
    f=div(10,5);
    printf("the sum is %d\n",c);
    printf("the difference is %d\n",d);
    printf("the product is %d\n",e);
    printf("the quotient is %d\n",f);
    return 0;
}
