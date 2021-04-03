#include <stdio.h> 

	int main(void){
  	int integer;
  	printf("Enter an integer: ");
  	scanf("%d", &integer);
	
  	
	
	int a =1;
   while( a <= integer ) {
      printf("%d\n", a);
      a++;
   }
	return 0;
} 