#include<stdio.h>
int main()
{
    int i,n,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b,c;
    scanf("%d%d",&b,&c);
    if(b>c)
    {
        int d=b;
        b=c;
        c=d;
    }
   for(i=0;i<n;i++)
   {
       if(a[i]>=b && a[i]<=c)
       continue;
       s=s+a[i];
      
   }
    printf("%d ",s);
   
}