#include <stdio.h>

//Simple c file that calculates the sum of an integer 

int main() {

	//declare and initialise variables
	int n = 0;
	int total = 0;
	int f = 1;

	//get user input
	printf("Please enter an integer: ");
	scanf("%d", &n);

	//fixed loop to calculate summation 
	for (int i = 0; i <= n; i++) {
		total = i + total;
	}

	//calculation of factorial
	for (int i = 1; i <= n; i++) {
		f = f*i;
	}

	//output messages
	printf("The number you entered was: %d\n", n);
	printf("The running total of your integers is: %d\n", total);
	printf("The factorial of your integer is: %d\n", f);

	return 0;
}
