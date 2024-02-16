#include<stdio.h>
int main()
{
    int n,i,b;
    scanf("%d%d",&n,&b);
    for(i=1;i<=b;i++)
    {
        printf("%d x %d = %d
",n,i,i*n);
    }
}