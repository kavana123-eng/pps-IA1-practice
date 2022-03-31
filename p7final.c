#include<stdio.h>
struct _complex
{
  int real, imaginary;
};
typedef struct_complex Complex;
Complex input_complex()
{
  Complex p;
  printf("enter the real and imaginary number\n");
  scanf("%d%d",&p.real,&p.imaginary);
  return p;
}
 Complex add( Complex a, Complex b)
{
  Complex z;
  z.real=a.real+b.real;
  z.imaginary=a.imaginary+b.imaginary;
  return z;
}
void output( Complex a, Complex b, Complex c)
{
  printf("the sum of (%d+%di)+(%d+%di)=(%d+%di)\n",a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
}
int main()
{
  struct complex a,b,c;
  a=input_complex();
  b=input_complex();
  c=add(a,b);
  output(a,b,c);
  return 0;
}


