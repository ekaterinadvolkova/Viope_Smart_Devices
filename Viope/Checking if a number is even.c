#include <stdio.h> 
/*Write a program that prompts the user for an integer and checks whether it is even or odd. 
If the number is even, print the value 0, and if it is odd, print the value 1.*/
 

int main(void){ 
  int num1;
	int rtrn;
	
	//program asks to put integer and decimal
  printf("Enter an integer: "); 
  scanf("%d", &num1);  
	
	//check even or odd
	if (num1 % 2 == 0) {
		rtrn = 0;
	} else {
		rtrn = 1;
	}
	