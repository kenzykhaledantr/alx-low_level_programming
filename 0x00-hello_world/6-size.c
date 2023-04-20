#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the size of various types on the computer it is compiled
 * and run on.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of char: %lu byte(s)\n",(unsigned long)sizeof(char));
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(int));
printf("Size of long: %lu byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of long long: %lu byte(s)\n", (unsigned long)sizeof(long long int));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(float));
return (0);
}

