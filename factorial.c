#include<stdio.h>
void main()
{
    int n, i;
    long int fact=1;
    printf("enter the n value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       fact=fact*i;
    }
    printf("%d",fact);
}
