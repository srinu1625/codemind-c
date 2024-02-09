#include<stdio.h>
int main()
{
    int d,day,y,w;
    scanf("%d",&d);
    y=d/365;
    day=d%365;
    w=day/7;
    printf("%d
%d",y,w);
}