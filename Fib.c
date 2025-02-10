# include<stdio.h>
void main()
{
    int i,n,f1=-1,f2=1,f3;
    n=5;
    for(i=1;i<=n;i++)
    {
        f3= f1+f2;
        printf(" %d  ",f3);
        f1=f2;
        f2=f3;
    }
    }