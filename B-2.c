#include <stdio.h>

void printspace(int num){ //②
	int i ;
	for(i=0;i<num;++i){
		printf(" ");
	}
}

int main(void)
{
	int i, j, k;
	k = 1;

	for (i=10;i>0;--i) //①
	{
		printspace(i); //②
		for (j=0;j<k;++j) //③
		{
			printf("o");
		}
		k += 2; //④
		printf("\n");  //⑤
	}
	return 0;
}