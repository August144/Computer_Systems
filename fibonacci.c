#include <stdio.h>

int main(){
	int position;
	double a = 1;
	double b = 1;
	int initial;

	printf("what number in the fibonacci sequence do you want?: ");
	scanf("%i", &position);
	
	initial = position;
	
	if((initial == 1) || (initial == 2)){
		printf("1");
	}
	else{
		while(position > 2){
			double current = b;
			b = a + b;
			a = current;
			position -= 1;
		}
		printf("\nPosition %i in the fibonacci sequence is: %f\n",
			initial, b);
	}
}
		
