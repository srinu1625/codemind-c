#include<stdio.h>
int main()
{
    int x,d,ans;
    scanf("%d%d",&x,&d);
    ans=x*5;
    if(ans>=d)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}