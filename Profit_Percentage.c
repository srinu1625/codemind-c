#include<stdio.h>
int main()
{
    int cp,sp;
    scanf("%d%d",&cp,&sp);
    int d;
    float p;
    d=sp-cp;
    p=(float)d/cp*100;
    printf("%.2f",p);
}