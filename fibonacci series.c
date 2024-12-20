#include<stdio.h>
void main()
{
    int i,n,a=0,b=1,c;
    printf("enter the n value:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        c=a+b;
        printf("the value of c is :%d",c);
        a=b;
        b=c;
    }
}
