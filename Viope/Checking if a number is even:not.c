//is even, print "Number 2 is even.", if it is odd, print "Number 1 is odd.".

#include <stdio.h> 
 

int main(void){ 
  int num1;

	//program asks to put integer and decimal
  printf("Enter an integer: "); 
  scanf("%d", &num1);  
	
	//check even or odd
	if (num1 % 2 == 0) {
		printf("Number %d is even.", num1); 
	} else {
		
		printf("Number %d is odd.", num1); 
	}
}