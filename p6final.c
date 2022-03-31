#include<stdio.h>
void input_two_string(char *a,char *b)
{
  printf("Enter the word to be compared\n");
  scanf("%s%s",a,b);
} 
int strcmp(char *a,char *b)
{
  int c=0;
  while((*a)&&*a==*b)
  {
    a++;
    b++;
  }
  c=*a-*b;
  return c;
}
void output(char *a,char *b,int result)
{
  if(result>0)
  printf("%s is greater than %s",a,b);
  if(result<0)
  printf("%s is greater than %s",b,a);
  else
  printf("%s is same as %s",b,a);
}
int main()
{
  char c[20],d[20];
  input_two_string(c,d);
  int i=strcmp(c,d);
  output(c,d,i);
}
