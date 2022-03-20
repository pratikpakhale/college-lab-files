#include<stdio.h>
#include<stdlib.h>

int main(){

  int n;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  int *arr = (int*)calloc(n,sizeof(int));

  printf("Enter the elemnts (space seperated): ");
  int i;
  for(i=0;i<n;i++){
    scanf("%d", arr+i);
  }

  int j,temp;

  for(i=0;i<n;i++){
    for(j=0;j<n-1;j++){
      if(*(arr+j) > *(arr+j+1)){
          temp = *(arr+j);
          *(arr+j) = *(arr+j+1);
          *(arr+j+1) = temp;
      }
    }
  }

  printf("The sorted array: ");

  for(i=0;i<n;i++){
    printf("%d ", *(arr+i));
  }

  return 0;
}