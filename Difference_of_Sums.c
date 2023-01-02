#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0,diff,Sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+pow(i,2);
        Sum=Sum+i;
        diff=pow(Sum,2)-sum;
    }
    printf("%d ",diff);
}