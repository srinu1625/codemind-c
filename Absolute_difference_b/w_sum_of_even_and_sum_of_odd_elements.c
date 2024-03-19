#include<stdio.h>
int main()
{
    int n,os,es;
    scanf("%d",&n);
    int a[100],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        os=os+a[i];
        else
        es=es+a[i];
        
    }
    if(os>es)
    printf("%d",os-es);
    else
    printf("%d",es-os);
}