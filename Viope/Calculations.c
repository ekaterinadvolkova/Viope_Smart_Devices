#include <stdio.h> 
/*Write a program that prompts the user for two 
integers and prints the sum, difference and product of the numbers on the screen.*/
 

int main(void){ 
  int num1;
  int num2;
	int sum;
	int diff;
	int prod;
	

	//program asks to put integer and decimal
  printf("Enter the first number:"); 
  scanf("%d", &num1); 
  printf("Enter the second number:"); 
  scanf("%d", &num2); 
	
	//count all values
	sum = num1 + num2;
	diff = num1 - num2;
	prod = num1 * num2;
	
	//print values
  printf("%d+%d=%d\n",num1, num2, sum); 
  printf("%d-%d=%d\n",num1, num2, diff); 
  printf("%d*%d=%d\n",num1, num2, prod); 
	
  return 0; 
} 