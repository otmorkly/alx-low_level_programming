#include <stdio.h>
/**
 * main -  prints the size of various types on the computeir
 * Description - Prints out the sizes of various data types on the computer
 * this program is compiled on.
 * Return: 0 if success.
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %c byte(s)", sizeof(a));
	printf("Size of an int: %d byte(s)", sizeof(b));
	printf("Size of a long int: %d byte(s)", sizeof(c));
	printf("Size of a long long int: %ld byte(s)", sizeof(d));
	printf("Size of a float: %f byte(s)", sizeof(e));
	return (0);
}
