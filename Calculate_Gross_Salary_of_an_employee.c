#include<stdio.h>
int main()
{
    float b,h,d,p,g;
    scanf("%f%f%f",&b,&h,&d);
    p=b*12/100;
    g=b+h+d+p;
    printf("%.2f
",p);
    printf("%.2f
",g);
}