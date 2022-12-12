#include <stdio.h>
int main(void)
{
	int i;
	printf("日を入力してください(1-31) > ");
	scanf("%d", &i);
	if (i%10==5)
		printf("%d日は特売日です。\n", i);
	else
		printf("%d日は特売日ではありません。\n", i);
	return 0;
}