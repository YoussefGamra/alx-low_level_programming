#include <stdio.h>

/**
 * main - Enty point
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: Alwys 0 (Seccess)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
