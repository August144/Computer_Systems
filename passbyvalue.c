#include <stdio.h>

void setValue(int *x){
	*x = 9999;
}

int main(){
	int a = 6;
	setValue(&a);
	printf("%i\n", a);
	
	return 0;
}

