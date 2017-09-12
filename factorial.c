#include <stdio.h>

int main() {
	int factorial;
	int initial;
	int result = 1;
	
	printf("Enter what you want the factorial of: ");
	scanf("%d", &factorial);

	initial = factorial;
	while(factorial > 0){
		result = (result * factorial);
		factorial = factorial - 1;
	}

	printf("\nThe factorial of %i is %i\n", initial, result); 		 	
	
	return 0;
}
