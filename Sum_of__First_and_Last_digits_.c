#include<stdio.h>
int main()
{
    int n,r,r1,rev=0,r2;
    scanf("%d",&n);
    r1=n%10;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    r2=rev%10;
    printf("%d",r1+r2);
}