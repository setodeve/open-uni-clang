#include <stdio.h>
int main(void)
{
	char i;
	printf("出身都道府県の頭文字を答えてください > ");
	scanf("%c", &i);
	if ( i=='e'|| i=='E' )
		printf("あなたは愛媛県出身ですね。");
	else if ( i=='w'|| i=='W')
		printf("あなたは和歌山県出身ですね。");
	return 0;
}