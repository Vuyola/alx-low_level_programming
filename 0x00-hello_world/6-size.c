#include <stdio.h>
/**
*main - size is not granduer and territory does not make a nation
*Return: always 0 (Success)
*/
int main(void)
{
printf("Size of a char: %d 1 byte(s)\n", sizeof(char));
printf("Size of int: %d 4 byte(s)\n", sizeof(int));
printf("Size of a long int: %d 8 byte(s)\n", sizeof(long int));
printf("Size of long long int: %d 8 byte(s)\n", sizeof(long long int));
printf("Size of a float: %d 4 byte(s)", sizeof(float));
return (0);
}
