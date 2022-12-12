#include <stdio.h>
int main(void)
{
	double i;
	printf("円周率はいくつですか > ");
	scanf("%lf", &i);
	if ( i>3.1 && i<3.15 )
		printf("正解です");
	else
		printf("不正解です");
	return 0;
}