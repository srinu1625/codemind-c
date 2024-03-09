#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int d=b*1+c*2;
    if(a<=d)
        printf("Qualify");
    else
        printf("Not Qualify");
}