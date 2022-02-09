#include<stdio.h>
void input(int *a)
{
  printf("Enter the number\n");
  scanf("%d",a);
}
int is_composite(int a)
{
  int i,count=0;
  for(i=1;i<=a;i++)
{
  if(a%i==0)
  count++;
}
return count;
}
void output(int count)
{
  if(count>2)
  printf("it is Composite");
  else
  printf("not Composite");
}
int main()
{
  int a,count;
  input(&a);
  count=is_composite(a);
  output(count);
  return 0;
}