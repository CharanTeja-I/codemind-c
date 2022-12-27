#include<stdio.h>
int main()
{
    int a,b,n;
    scanf("%d%d",&a,&b);
    for(n=1;n<=a*b;n++)
    {
        if(n%a==0&&n%b==0)
        break;
    }
    printf("%d",n);
}