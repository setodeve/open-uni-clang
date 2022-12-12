#include <stdio.h>
int main(void)
{
	int i;
	printf("正の整数を入力してください > ");
	scanf("%d", &i);
	if (i % 5 ==0)
		printf("%dは5で割り切れます。\n", i);

	return 0;
}