#include <stdio.h>
int main(void)
{
	int koku = 75;
	int san  = 93;
	int sya  = 68;
	printf("国語は%d点、算数は%d点、社会は%d点です。\n", koku, san, sya);
	printf("平均点は%d点です。\n", (int)((double)(koku + san + sya) / 3 + 0.5));
	return 0;
}