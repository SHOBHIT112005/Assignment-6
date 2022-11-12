#include<stdio.h>
int main()
{
  int count = 0;
  int N;
  printf("Enter a number\n");
  scanf("%d",&N);
  while(N!=0)
  {
    N = N/10;
    count ++;
  }
  printf("The number of digits are %d",count);
  return 0;
}