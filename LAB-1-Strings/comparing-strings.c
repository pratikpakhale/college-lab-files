#include<stdio.h>

int main(){

  char str1[100], str2[100];

  printf("Enter two space seperated strings: ");
  scanf("%s%s", &str1, &str2);

  int i=0, flag=0;

  while(1){
    if((str1[i] == '\0' && str2[i] != '\0') || (str1[i] != '\0' && str2[i] == '\0')){
      flag=1;
      break;
    }

    if(str1[i] != str2[i]){
      flag=1;
      break;
    }

    if(str1[i] == '\0' && str2[i] == '\0') break;

    i++;
  }

  if(flag == 1) printf("Not Equal");
  else printf("Strings are equal");

  return 0;
}