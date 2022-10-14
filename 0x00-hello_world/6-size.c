#include <stdio.h>
/**
 * This is the main function
 *that prints the size of the datatypes
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %d byte(s)", sizeof(char));
	printf("Size of a char: %d byte(s)", sizeof(int));
	printf("Size of a char: %d byte(s)", sizeof(long int));
	printf("Size of a char: %d byte(s)", sizeof(long long int));
	printf("Size of a char: %d byte(s)", sizeof(float));
	return (0);
}
