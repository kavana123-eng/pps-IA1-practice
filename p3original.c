#include<stdio.h>
int input()
{
  int n;
  printf("Enter n\n");
  scanf("%d",&n);
  return n;
}
int sum_range(int n)
{
  int sum = 0;
  for(int i=1;i<=n;i++)
  sum +=i;
  return sum;
}
void output(int n,int sum)
{
  for(int i=1;i<n;i++)
  printf("%d+",i);
  printf("%d=%d",n,sum);
}
int main()
{
  int n = input();
  int sum = sum_range(n);
  output(n,sum);
  return 0;
}
