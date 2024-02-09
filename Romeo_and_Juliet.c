#include<stdio.h>
int main()
{
    int x,y,z,tot,ans;
    scanf("%d%d%d",&x,&y,&z);
    tot=x*5+y*10;
    ans=tot/z;
    printf("%d",ans);
}