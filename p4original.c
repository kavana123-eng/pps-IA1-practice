#include<stdio.h>
int input()
{
  int a;
  printf("enter the size of the array:\n");
  scanf("%d",&a);
  return a;
}
void input_ar(int a,int ar[a])
{
  for(int i=0;i<a;i++)
  {
    printf("enter the values into the array\n");
    scanf("%d",&ar[i]);
  }
}
int sum(int a,int ar[a])
{
  int sum=0;
  for (int i=0;i<a;i++)
  {
    sum=sum+ar[i];
  }
  return sum;
}
void output(int a,int ar[a],int sum)
{
  int i;
  for (i=0;i<a-1;i++)
  {
    printf("%d+",ar[i]);
  }
  printf("%d is %d",ar[i],sum);
}
int main()
{
  int a,s;
  a=input();
  int b[a];
  input_ar(a,b);
  s=sum(a,b);
  output(a,b,s);
  return 0;
}