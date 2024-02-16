#include<stdio.h>
int main()
{
    int n,i,b;
    scanf("%d",&n);
    for(i=1;i<=12;i++)
    {
        printf("%d x %d = %d
",n,i,i*n);
    }
}