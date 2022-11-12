#include<stdio.h>
int main()
{
    int x,N,fac;
    printf("Enter the value of N\n");
    scanf("%d",&N);
    fac=1;
    for(x=1;x<=N;x++)
    {
        fac = fac*x;
    }
    printf("The factorial of %d is %d",N,fac);
    return 0;
}