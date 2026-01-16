#include <stdio.h>

//Simple c file that calculates running total with a fixed loop of five

int main() {

	//variable initialisation
	int total = 0;

	//fixed loop 
	for (int c = 0; c <= 5; c++) {
		total = c + total;
	}

	printf("The running total of integers up to and including 5 is %d\n", total);

	return 0;
}
