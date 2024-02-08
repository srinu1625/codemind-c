#include<stdio.h>
int main()
{
    int a,b,c;
    float area;
    scanf("%d%d%d",&a,&b,&c);
    area=(float)(a+b)/2*c;
    printf("%.4f",area);
}