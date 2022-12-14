#include <stdio.h>
int main(void)
{
	int a, b, c;
	printf("整数を3つ入力してください。\n");
	printf("1つ目 > ");
	scanf("%d", &a);
	printf("2つ目 > ");
	scanf("%d", &b);
	printf("3つ目 > ");
	scanf("%d", &c);
	int max = a ;
  int min = a ;

  if(b>max){
    max = b;
  }
  if(c>max){
    max = c;
  }

  if(b<min){
    min = b;
  }
  if(c<min){
    min = c;
  }
  
  printf("最大値は%dです。\n", max);
  printf("最小値は%dです。\n", min);
	
  return 0;
}