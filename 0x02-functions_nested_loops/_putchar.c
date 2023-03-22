#include <unistd.h>

/**
 * _putchar - writes the characher c to stdout
 * @c: The charcter to print
 * Return: On success 1.
 * On error, -1 is Returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
