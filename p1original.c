#include<stdio.h>
void input(float *a,float *b)
{
  printf("Enter the base value\n");
  scanf("%f",a);
  printf("Enter the height value\n");
  scanf("%f",b);
}
void find_area(float a,float b,float *area)
{
  *area=(a*b)/2;
}
void output(float area)
{
  printf("Area of Triangle is = %f",area);
}
int main()
{
  float base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(area);
  return 0;
}