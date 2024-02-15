#include<stdio.h>
int main()
{
    int x,y,t;
    scanf("%d%d",&x,&y);
    t=30*y;
    if(x>t || x==t)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}