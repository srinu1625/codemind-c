#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<=20)
    {
        printf("COLD");
    }
    else if(n>20)
    {
        printf("HOT");
    }
}