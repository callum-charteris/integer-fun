#include <stdio.h>

//Simple c file that calculates the sum of an integer 

int main() {

	//declare and initialise variables
	int n=0;
	int total=0;

	//get user input
	printf("Please enter an integer to calculate it's sum of integers: ");
	scanf("%d", &n);

	//fixed loop to calculate the sum of the users integer 
	for (int i = 0; i <= n; i++) {
		total = i + total;
	}
	
	//output messages
	printf("The number you entered was: %d\n", n);
	printf("The running total of your integers is %d\n", total);

	return 0;
}
