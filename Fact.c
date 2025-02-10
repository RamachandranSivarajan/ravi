# include<stdio.h>
void main()
{
    int i,n,fact=1;
    n=5;
    for(i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    for(i=1;i<=n;i++)
    {
        printf(" %d * ",i);
    }
    printf("\b\b = %d ",fact);
}