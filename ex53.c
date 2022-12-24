#include <stdio.h>
double expo(double x, int y)
{
	double e;
	for (e = 1 ; y > 0; --y)
	{
		e *= x;
	}
	return e;
}
int main(void)
{
	double n1; 
  int n2;
	printf("少数 > ");
	scanf("%lf", &n1);
	printf("整数 > ");
	scanf("%d", &n2);
	printf("%.1fの%d乗は%lfです。\n", n1, n2, expo(n1, n2));
	return 0;
}