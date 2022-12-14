#include <stdio.h>
int main(void)
{
	int point;
  char rank ;
	
  printf("得点を入力してください(0-100) > ");
	scanf("%d", &point);

  if(point>=90) rank = 'S';
  else if(point>=80) rank = 'A';
  else if(point>=70) rank = 'B';
  else if(point>=60) rank = 'C';
  else rank = 'D';

  printf("あなたの成績は%cです。",rank);
  
  return 0;
}