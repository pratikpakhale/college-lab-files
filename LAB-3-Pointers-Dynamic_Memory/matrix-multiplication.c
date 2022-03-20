#include<stdio.h>

int main(){
  int rows, cols;
  printf("Enter the number of rows and columns [space seperated]: ");
  scanf("%d%d", &rows, &cols);

  int matrix_one[rows][cols], matrix_two[rows][cols], multiplied_matrix[rows][cols];

  printf("Enter the 3x3 Matrix One down below: \n");
  int i,j,k;

  for(i=0;i<rows;i++)    
    for(j=0;j<cols;j++)
      scanf("%d", &matrix_one[i][j]);

  printf("Enter the 3x3 Matrix Two down below: \n");

  for(i=0;i<rows;i++)    
    for(j=0;j<cols;j++)
      scanf("%d", &matrix_two[i][j]);

  for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
      multiplied_matrix[i][j] = 0;
      for(k=0;k<cols;k++)
        multiplied_matrix[i][j] += matrix_one[i][k] * matrix_two[k][j];
    } 
  }
  printf("\n\nThe Multiplied Matrix: \n\n");
  for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
      printf("%d ", multiplied_matrix[i][j]);
    }
    printf("\n");
  }

  printf("\n\n");
  return 0;
}