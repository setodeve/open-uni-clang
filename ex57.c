#include <stdio.h>
int is_prime(int num)
{
	int i = 2 ;
	while(i<num){
		if(num%i==0) return 0 ;
		i++;
	}
	return 1 ;
}
int main(void)
{
  int num;

	printf("3以上の整数を入力してください > ");
	scanf("%d", &num);

	if(is_prime(num)){
		printf("%dの素数はです。\n", num);
	}else{
		printf("%dの素数ではありません。\n", num);
	}

	return 0;
}