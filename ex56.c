#include <stdio.h>
int myabs(int num)
{
	return (num<0) ? -num : num;
}
int main(void)
{
  int num;

	printf("整数 > ");
	scanf("%d", &num);

	printf("%dの絶対値は%dです。\n", num, myabs(num));
	return 0;
}