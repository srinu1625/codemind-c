#include<stdio.h>
int main()
{
    int a[20],i,ele,n,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(ele==a[i])
        c++;
    }
    printf("%d",c);
}