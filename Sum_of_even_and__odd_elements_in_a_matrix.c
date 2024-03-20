#include<stdio.h>
int main()
{
    int r,c,i,j,s=0,s1=0;
    scanf("%d%d",&r,&c);
    int a[r][c];
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]%2==0)
            {
                s=s+a[i][j];
            }
            else
            {
                s1=s1+a[i][j];
            }
        }
    }
    printf("%d %d",s,s1);
}