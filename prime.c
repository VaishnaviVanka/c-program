#include<stdio.h>
void main()
{
    int n,i,count=0;
    printf("enter the n value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    {
        printf("the given number is prime:");
    }
    else
    {
        printf("not prime:");
    }
}