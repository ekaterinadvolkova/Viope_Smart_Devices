#include <stdio.h> 
/*Write a program that first asks the user for an integer and after that,
*a floating-point number. Finally, the program prints both numbers on the screen.
*The floating-point number shall be printed with two decimal places of precision.*/


int main(void){
  int number1;
  float number2;

	//program asks to put integer and decimal
  printf("Enter an integer: ");
  scanf("%d", &number1);

  printf("Enter a decimal number:");
  scanf("%f", &number2);
  printf("\n");

	//print values, round number2
  printf("You entered the integer: %d\n",number1);
  printf("You entered the decimal number, rounded to two decimal places: %.2f\n",number2);
  return 0; 
} 