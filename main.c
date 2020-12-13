#include <stdio.h>
#include <stdlib.h>

void DecimalToBinary(int number) {
	
	int myBinary[32];
	int n, i;
	
	do {		
		myBinary[n] = number % 2;
		number = number / 2; 
		n++;		
	} while(number > 0);
	
	for(i=n-1;i>=0;i--)
		printf("%d", myBinary[i]);
}

int main(int argc, char *argv[]) {
	DecimalToBinary(12);
	return 0;
}
