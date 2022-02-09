#include<stdio.h>
int input()
{
  int n;
  printf("Enter n\n");
  scanf("%d",&n);
  return n;
}
void input_comp(int n,int a[n])
{
  int i,sum;
  for(i=1;i<n;i++)
  {
    printf("Enter the element\n");
    scanf("%d",a[i]);
  }
}
void sum(int n,)