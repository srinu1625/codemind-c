#include<stdio.h>
int main()
{
    int cp,sp;
    scanf("%d%d",&cp,&sp);
    int d=cp-sp;
    float l=(float)d/cp*100;
    printf("%.2f",l);
}