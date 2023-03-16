#include <stdio.h>
/**
*main - size is not granduer and territory does not make a nation
*Return: always 0 (Success)
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char)a);
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(int)b);
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int)c);
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(long long int)d);
printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(float)f);
return (0);
}
