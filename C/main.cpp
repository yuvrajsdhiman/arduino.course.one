#include<stdio.h>
#include "maths.h"

int main()
{
    int c,d,e,f,g,h,i,j;
    c = add(X,Y);
    d = sub(X,Y);
    e=mul(X,Y);
    f=divide(X,Y);
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
