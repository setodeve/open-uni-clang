#include <stdio.h>
int main(void)
{
	double value;
  int year;
	
  printf("税抜き価格 > ");
	scanf("%lf", &value);
  printf("年度 > ");
	scanf("%d", &year);

  value *= year>=2020 ? 1.1 : 1.05;

  printf("税込み価格は%.0f円です。",value);

  return 0;
}