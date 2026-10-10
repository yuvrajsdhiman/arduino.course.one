#include<stdio.h>

#define X 6
#define Y 6
#define COUNTRY 'I'

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
}


int main()
{
    int c,d,e,f,g,h,i,j;
    c = add(X,Y);
    d = sub(X,Y);
    e=mul(X,Y);
    f=div(X,Y);
    g=mod(X,Y);
    printf("the sum is %d\n",c);
    printf("the difference is %d\n",d);
    printf("the product is %d\n",e);
    printf("the quotient is %d\n",f);
    printf("the remainder is %d\n",g);
    h = ++c;
    i = --d;
    printf("the incremented value of h is %d\n",h);
    printf("the decremented value of i is %d\n",i);
    printf("the value of c is %d\n",c);
    h = c++;
    i = d--;
    printf("the post incremented value of h is %d\n",h);
    printf("the post decremented value of i is %d\n",i);
    printf("the value of c is %d\n",c);
    j=usub(X,Y);
    printf("the unsigned difference is %d\n",j);
    switch (COUNTRY)
    {
        case 'I':
            printf("india\n");
            break;
        case 'U':
            printf("usa\n");
            break;
        case 'C':
            printf("china\n");
            break;  
        default:
            printf("country not found\n");
            break;    

    }
    return 0;
}
