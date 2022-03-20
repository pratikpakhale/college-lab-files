#include<stdio.h>

int sum_by_loop(int);
int sum_by_recursion(int);

int main(){

  int n;
  printf("Enter the value for n: ");
  scanf("%d", &n);

  int sum = sum_by_recursion(n); 

  printf("The sum upto %d natural numbers is: %d", n, sum);

  return 0;
}

int sum_by_loop(int n){
  int sum=0;

  n++;

  while(n--){
    
    sum+=n;
  }

  return sum;
}

int sum_by_recursion(int n){

  if(n==0) return n;

  return n  + sum_by_recursion(n-1);
}