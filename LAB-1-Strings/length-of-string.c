#include<stdio.h>

int main(){

  char str[100];
  printf("Enter the string: ");
  scanf("%s", &str);

  int strLen = 0;
  while(str[strLen] != '\0' ){
    strLen++;
  }

  printf("Length of the string [%s] is : %d", str,  strLen);

  return 0;
}