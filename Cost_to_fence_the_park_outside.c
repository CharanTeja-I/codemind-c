#include<stdio.h>
int main()
{
    int l,b,w,c,nl,nb,tar,ar,C;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    ar=l*b;
    nl=l+(2*w);
    nb=b+(2*w);
    tar=(nb*nl)-ar;
    C=c*tar;
    printf("%d",C);
}