#include<stdio.h>
void main()
{
    int i, n;
    printf("enter  no of elements:");
    scanf("%d",&n);
    int a[n];
     printf(" enter the elements:"); 
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
          }
          for(i=0;i<n;i++)
          {
              printf("%d",a[i]);
              
          }
}
