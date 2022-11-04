#include <stdio.h>
int main(void)
{
  char initial = 'M' ;
	int score = 42;
  double height = 164.5;

	printf("%cさんの年齢は%d歳、身長はは%fcmです。\n", initial, score, height);
  printf("%cさんの年齢は%d歳、身長はは%.1fcmです。\n", initial, score, height);
	return 0;
}