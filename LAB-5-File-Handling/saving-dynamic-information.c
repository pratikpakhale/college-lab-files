#include<stdio.h>
#include<stdlib.h>

int add_data(char [], int, float);

int main(){

  int acc_no, flag = 1;
  float balance;
  char name[50];

  printf("Initializing\n\n");

  while (flag==1)
  {
    printf("Enter Customer Name: ");
    scanf("%s", &name);
    printf("Enter Account Number: ");
    scanf("%d", &acc_no);
    printf("Enter Account Balance: ");
    scanf("%f", &balance);

    add_data(name, acc_no, balance);
    getchar();

    printf("Do you wish to add more? [0/1]: ");
    scanf("%d", &flag);

  }
  

  return 0;
}

int add_data(char name[], int acc_no, float balance){
  FILE *fp;
  fp = fopen("data.txt", "a");

  fputs("Customer: ", fp);
  fputs(name, fp);
  fputs("\n", fp);
  fputs("Account Number: ",fp);
  fprintf(fp, "%d", acc_no);
  fputs("\n",fp);
  fputs("Balance: ",fp);
  fprintf(fp, "%f", balance);
  fputs("\n\n", fp);

  return 0;
}