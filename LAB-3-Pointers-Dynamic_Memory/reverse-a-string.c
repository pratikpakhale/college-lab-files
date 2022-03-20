#include<stdio.h>

int strLen(char *str){
  int t = 0;
  while(*str != '\0' ){
    t++;
    *str++;
  }

  return t;
}

void swap(char *c1, char *c2){
  char temp;
  temp = *c1;
  *c1 = *c2;
  *c2 = temp;
}

void reverse(char *p){

  int l = strLen(p);
  int i=0;
  while(i < (l/2)){

    swap((p+i), (p+l-i-1));

    i++;
  }
}

int main(){
  char str[100];

  printf("Enter the string to reverse: ");
  scanf("%s", str);

  reverse(str);

  printf("The reversd string is : %s", str);

  return 0;
}