#include <stdio.h>
int main(void)
{
	int score = 42;
  double height = 164.5;

	printf("Mさんの年齢は%d歳、身長はは%fcmです。\n", score, height);
  printf("Mさんの年齢は%d歳、身長はは%.1fcmです。\n", score, height);
	return 0;
}