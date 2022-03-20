#include <stdio.h>

void swap(int *a, int *b){
  *a ^= *b;
  *b ^= *a;
  *a ^= *b;
}

int main(){

  int a,b;
  printf("Enter two numbers to swap: ");
  scanf("%d%d", &a,&b);

  swap(&a,&b);

  printf("a: %d, b: %d",a,b);

  return 0;
}