#include<stdio.h>
int main()
{
    int i,n,s=0,flag=0;
    int avg;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        s=s+ar[i];
        
    }
    avg=s/n;
  //  printf("%.2f",avg);
    for(i=0;i<n;i++)
    {
        if(avg==ar[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("True");
    else
    printf("False");
}