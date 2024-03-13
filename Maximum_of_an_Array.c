#include<stdio.h>
int main()
{
    int n,x[20],max=-9999,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(max<x[i])
          max=x[i];
    }
    printf("%d",max);
    return 0;
}