#include<stdio.h>

int input(int *a,int *b,int *c)
{
  printf("Enter three Number\n");
  scanf("%d%d%d",a,b,c);
  return 0;
}
void cmp(int a,int b,int c,int *result)
{
  if(a!=b && b!=c && c!=a)
  {
    *result=2;
  }
  else
  {
    *result=1;
  }
}
void output(int result)
{
  if(result==2)
  {
    printf("it is scalene triangle");
  }
  else if(result==1)
  {
    printf("it is not scalene");
  }
}
int main()
{
  int a,b,c,result;
  input(&a,&b,&c);
  cmp(a,b,c,&result);
  output(result);
  return 0;
}
