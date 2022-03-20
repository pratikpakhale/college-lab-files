#include<stdio.h>

int main(){

  char str1[100], str2[100], concat[200];
  printf("Enter two space seperated strings to concat: ");
  scanf("%s%s",&str1, &str2);

  int i=0;

  while(str1[i] != '\0'){
    concat[i] = str1[i];
    i++;
  }

  int j=i;
  i=0;

  while(str2[i] != '\0'){
    concat[j] = str2[i];
    i++;
    j++;
  }

  printf("Concated string is: %s", concat);

  return 0;
}