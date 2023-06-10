#include <stdio.h>

int main() {
	FILE *fptr;
	
	// Creating a file 
	fopen_s(&fptr, "filename.txt", "w");

	// Closing an open file
	fclose(&fptr);


	printf("\nHello World!"); 


	return 0;
}