#include<stdio.h>
int main()
{
    int x,N,f=0;
    printf("Enter a number\n");
    scanf("%d",&N);
    for(x=2;x<N;x++)
    {
        if(N%x==0)
        f=1;
    }
    if(f==1)
    printf("This is not prime number");
    else
    printf("This is a prime number");
    
    return 0;
}