#include<stdio.h>
int main()
{
    int x,N,sum;
    printf("Enter the value of N\n");
    scanf("%d",&N);
    sum=0;
    for(x=1;x<=N;x++)
    {
        sum = sum+x*x*x;
    }
    printf("The sum cubes of first %d natural numbers is %d",N,sum);
    return 0;
}