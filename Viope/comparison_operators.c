#include <stdio.h> 
/*Write a program that first asks the user whether they drink coffee or 
tea and then how many cups a day. Finally, the program prints a statement 
in accordance with the following instructions: Coffee 0 to 2 cups: 
"You don't drink a lot of coffee, do you?", coffee 3-20 cups: "You drink a lot of coffee!", 
Tea 0-2 cups: "You do not drink a lot of tea.", tea 3-20 cups: "You drink a lot of tea!", 
Otherwise "An error occurred in the program!" The number of cups shall be processed as an 
integer variable and 
the drink as a character variable (c/t). You do not need to account for upper case letters.*/

int main(void){ 
  char drink[2] = {'c','t'};
	char choice;
	int amount;

	//program asks about coffe or tea
  printf("Do you drink coffee or tea (c/t)?"); 
  scanf("%c", &choice);  
  printf("How many cups do you drink daily:"); 
  scanf("%d", &amount);  
	
	//coffe or tea
	if (choice == drink[0]){
		if(amount<3){
			printf("You don't drink a lot of coffee, do you?"); 
		} else if(amount>=3 && amount<=20){
			printf("You drink a lot of coffee!"); 
		} else{
			printf("An error occurred in the program!"); 
		}
			
	} else {
		if(amount<3){
			printf("You don't drink a lot of tea, do you?"); 
		} else if(amount>=3 && amount<=20){
			printf("You drink a lot of tea!"); 
		} else{
			printf("An error occurred in the program!"); 
		}
	}
	
}