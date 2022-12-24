#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char i;
	printf("文字を入力してください > ");
	scanf("%c", &i);
	
	printf("%cを大文字にすると%cです。",i, toupper(i));
	printf("\n");
	return 0;
}