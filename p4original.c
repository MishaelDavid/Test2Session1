#include<stdio.h>
int input()
{
  int n;
  printf("enter a number\n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int a=0;
  int b=1;
  int c=0;
  for(int i=0;i<n;i++)
    {
      b=c+b;
      c=a;
      a=b;
    }
  return c;
}
void output(int n, int c)
{
  printf("the %dth term is %d ",n,c);
}
int main()
{
  int n,c;
  n=input();
  c=find_fibo(n);
  output(n,c);
  return 0;
}

