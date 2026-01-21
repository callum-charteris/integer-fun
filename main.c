#include <stdio.h>

//Simple c file that calculates the sum of an integer 

int main() {

	//declare and initialise variables
	int n;
	int total;

	//get user input
	printf("Please enter an integer to calculate it's sum of integers: ");
	scanf("%d", &n);

	//check that the right value has been collected
	printf("%d\n", n);

	//fixed loop 
	for (int c = 0; c <= 5; c++) {
		total = c + total;
	}

	printf("The running total of integers up to and including 5 is %d\n", total);

	return 0;
}
