#include<stdio.h>
struct _complex
{
  float real,imaginary;
};
typedef struct _complex Complex;

int input_count()
{
  int n;
  printf("Enter the number of complex numbers\n");
  scanf("%d",&n);
  return n;
}
Complex input()
{
  Complex c;
  printf("Enter real and imaginary parts of complex number\n");
  scanf("%f%f",&c.real,&c.imaginary);
  return c;
}

void input_n(int n,Complex c[n])
{
  for(int i =0;i<n;i++)
  c[i]=input();
}

Complex add(Complex a,Complex b)
{
  Complex c;
  c.real = a.real + b.real;
  c.imaginary=a.imaginary+b.imaginary;
  return c;
}

Complex add_n(int n,Complex c[n])
{
  Complex sum = {0,0};
  for(int i =0;i<n;i++)
  sum = add(sum,c[i]);
  return sum;
}

void output(int n,Complex c[n],Complex sum)
{
  for(int i = 0;i<n-1;i++)
  printf("(%.0f+i%.0f)+",c[i].real,c[i].imaginary);
  printf("(%.0f+i%.0f)=",c[n-1].real,c[n-1].imaginary);
  printf("(%.0f+i%.0f)\n",sum .real,sum .imaginary);
}
int main()
{
  int n;
  n=input_count();
  Complex c[n];
  input_n(n,c);
  Complex sum = add_n(n,c);
  output(n,c,sum);
  return 0;
}
