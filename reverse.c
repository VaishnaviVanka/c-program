#include<stdio.h>
void main()
{
    int rem,rev=0,n;
    printf("enter the n value:");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
        printf("the reverse number is :%d",rev);
    
}
