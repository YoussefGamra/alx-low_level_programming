#include <unistd.h>

/**
 * main - Prints a quote to the standard error
 *
 * Return: Always 1
 */
int main(void)
{
	write(2, "and that piece of art is usefu 2015-10-19\n", 5);
	return (1);
}
