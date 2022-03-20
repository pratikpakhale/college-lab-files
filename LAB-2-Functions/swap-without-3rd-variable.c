#include<stdio.h>

void swap(int, int);

int main(){

  int a,b;
  printf("Enter two space seperated numbers: ");
  scanf("%d%d", &a,&b);

  printf("a is: %d, b is: %d before swapping.\n",a,b);

  swap(a,b);

  return 0;

}

void swap(int a, int b){

  a=a+b;
  b=a-b;
  a=a-b;

  printf("After swapping, a is: %d, b is : %d",a,b);

}