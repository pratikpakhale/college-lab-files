#include<stdio.h>

int main(){

  FILE * fpW, * fpR;

  fpW = fopen("sample.txt","w");
  char data[100];

  char names[] = "Arun\nRaju\nBhaskar\nUsha\nVasu\nTATA\nRama";

  fputs(names,fpW);

  fclose(fpW);

  fpR = fopen("sample.txt","r");

  while(fgets(data, 100, fpR) != NULL){
    if(data[0] == 'R')
      printf("%s",data);
  }

  fclose(fpR);

  return 0;
}