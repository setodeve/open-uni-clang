#include <stdio.h>

int main(void)
{
  int age ;

  printf("How old are you? >") ;
  scanf("%d", &age) ;

  printf("After passing 5 years, you're %d years old \n", age+5) ;

  return 0 ;
}