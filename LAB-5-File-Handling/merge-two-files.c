#include<stdio.h>

int main(){

  FILE *f1, *f2, *f3;

  f1 = fopen("file-1-to-merge.txt","r");
  f2 = fopen("file-2-to-merge.txt", "r");
  f3 = fopen("merged-file.txt", "w");

  char data[100];

  while(fgets(data, 100, f1) != NULL){
    fputs(data, f3);
    fputs("\n", f3);
  }

  while(fgets(data, 100, f2) != NULL){
    fputs(data, f3);
    fputs("\n", f3);
  }

  return 0;
}