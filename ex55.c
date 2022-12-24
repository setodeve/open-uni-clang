#include <stdio.h>
int plus5(int num)
{
	return num+5;
}
int main(void)
{
  int num;

	printf("整数 > ");
	scanf("%d", &num);

	printf("%dに5を足すと%dです。\n", num, plus5(num));
	return 0;
}