#include<stdio.h>
int main()
{   
    int i = 0;
    for(i=0;i<=10;i++)
    {
        printf("%d. for the value of i is %d\n",i+1,i);
    }

    while (i<20)
    {
    
        printf("%d. while the value of i is %d\n",i+1,i);
        i++;
    }
    
    do 
    {
        printf("%d. do while the value of i is %d\n",i+1,i);
        i++;
    }while(i<10);
    return 0;
}