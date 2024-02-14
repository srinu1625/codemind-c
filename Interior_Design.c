#include<stdio.h>
int main()
{
    int a,b,c,d,s,s1;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    s=a+b;
    s1=c+d;
    if(s>s1)
    printf("%d",s1);
    else
    printf("%d",s);
}