#include <stdio.h>

int main(void)
{
  char initial = 'M' ;
  int age = 42 ;
  double height = 164.5 ;
  
  printf("%s\n", &initial) ;
  printf("%d\n", age) ;
  printf("%f\n", height) ;

  // printf("After passing 5 years, you're %d years old \n", age+5) ;

  return 0 ;
}