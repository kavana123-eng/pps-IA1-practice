#include<stdio.h>
void cmp(int a,int b,int c,int *large)
{
  if(a>b)
  {
    if(a>c)
    {
      *large=a;
    }
    else
    {
      *large=c;
    }
  }
  else
  {
    if(b>c)
    {
      *large=b;
    }
    else
    {
      *large=c;
    }
  }
}
void input(int *a,int *b,int *c)
{
  printf("enter the three numbers\n");
  scanf("%d%d%d",a,b,c);
}
int main()
{
  int x,y,z,large;
  input(&x,&y,&z);
  cmp(x,y,z,&large);
  printf("%d is the largest of them all\n",large);
  return 0;
}
