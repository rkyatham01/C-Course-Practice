#include <stdio.h>

long int factorial(int x){  //Function where the factorial recursion happens
 if (x <= 1)
    return 1;
 else
    return(factorial(x-1) * x);
}

int main(void){

int inputs; //scans for input
printf("Enter input here:\n");
scanf("%d", &inputs);
int i;

for (i=0; i < inputs; i++)
  printf("\nThe answer for fib(%d) and i = %d is %ld \n", inputs, i, factorial(i));
  //prints the factorial(input) i # of times

printf("\n");
return 0;

};
