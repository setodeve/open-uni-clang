#include <stdio.h>
int main(void)
{
	int num1,num2;
	printf("整数1は? ");
	scanf("%d", &num1);
	printf("整数2は? ");
	scanf("%d", &num2);

	printf("%d + %dは %d\n",num1, num2, num1+num2);
 	printf("%d - %dは %d\n",num1, num2, num1-num2); 
 	printf("%d * %dは %d\n",num1, num2, num1*num2); 
 	printf("%d / %dは %d\n",num1, num2, num1/num2); 
 	printf("%d %% %dは %d\n",num1, num2, num1%num2); 

	return 0;
}