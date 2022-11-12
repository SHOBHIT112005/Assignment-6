#include<stdio.h>
int main()
{
    int x,N,M,f=0;
    printf("Enter two numbers\n");
    scanf("%d\n%d",&N,&M);
    for(x=1;x<=N*M;x++)
    {
        if((x%N==0)&&(x%M==0))
        {
            printf("LCM of %d and %d is %d",N,M,x);
            break;
        }
    }
    return 0;
    
}