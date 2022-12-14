#include <stdio.h>
int main(void)
{
	int a, b, c;
	printf("整数を3つ入力してください。\n");
	printf("1つ目 > ");
	scanf("%d", &a);
	printf("2つ目 > ");
	scanf("%d", &b);
	printf("3つ目 > ");
	scanf("%d", &c);
	if (a >= b && a >= c)
	{
		printf("最大値は%dです。\n", a);
	}
	if (b > a && b >= c)
	{
		printf("最大値は%dです。\n", b);
	}
	if (c > a && c > b)
	{
		printf("最大値は%dです。\n", c);
	}
	if (a <= b && a <= c)
	{
		printf("最小値は%dです。\n", a);
	}
	if (b < a && b <= c)
	{
		printf("最小値は%dです。\n", b);
	}
	if (c < a && c < b)
	{
		printf("最小値は%dです。\n", c);
	}
  
	return 0;
}