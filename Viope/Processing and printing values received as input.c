#include <stdio.h> 
//Write a program that prompts the user for an amount in Finnish 
//markka and converts it to euro. Finally, the program prints the amount on the screen 
//in euro with two decimal places of precision. The euro conversion factor is 5.94573.
 

int main(void){ 
  float marka;
	float conv;
	float euro;

	//program asks to put integer and decimal
  printf("Enter an amount in FIM:"); 
  scanf("%f", &marka); 
	
	conv = 5.94573;
	euro = marka / conv;
 
	
	//print values, round number2
  printf("FIM converted to euro: %.2f\n",euro); 
  return 0; 
} 