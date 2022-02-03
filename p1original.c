#include<stdio.h>
void input(int *a,int *b)
{
  printf("enter the two number:\n");
  scanf("%d%d",a,b);
}
void add(int a,int b,int *sum)
{
  *sum=a+b;
}
void output(int a,int b,int sum)
{
  printf("sum of %d+%d is %d\n",a,b,sum);
}
int main()
{
  int a,b,c;
  input(&a,&b);
  add(a,b,&c);
  output(a,b,c);
  return 0;
}