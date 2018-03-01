#include<stdio.h>
void main()
{
    int a[20],i,j,b=0;
    printf("Enter the Numbers:");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
     if(a[i]>b)
     b=a[i];
    }
    printf("%d",b);
}
