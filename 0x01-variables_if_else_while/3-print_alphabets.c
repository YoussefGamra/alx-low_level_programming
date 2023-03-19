#include <stdio.h>

/**
 * mai - Enty point
 *
 * Description: print alphabet in lowercase then in uppercase
 * 
 * Return: Alwys 0 (Seccess)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';
	/*prints a -z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*print A - Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
