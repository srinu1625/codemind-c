#include<stdio.h>
int main()
{
    int m,n,p,q,i,j;
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d%d",&p,&q);
    int b[p][q],c[m][n];
    
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(m==p && n==q)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
                printf("%d ",c[i][j]);
            }
            printf("
");
        }
        
        
    }
    
}