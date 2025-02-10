# include<stdio.h>
void main()
{
    int i,n,fact=1;
    n=5;
    for(i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    printf("\n %d Fact  = %d",n,fact);
}