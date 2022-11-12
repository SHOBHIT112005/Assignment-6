#include<stdio.h>
int main()
{
    int M,W,N;
    printf("Enter a number\n");
    scanf("%d",&N);
    while(N!=0)
    {
        M = N%10;
        W = W*10 + M; 
        N = N/10; 
    }
    printf("The reverse of entered number is %d",W);
    return 0;
}