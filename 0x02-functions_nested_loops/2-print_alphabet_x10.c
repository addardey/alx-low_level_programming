#include "main.h"
/**
 * main - check the code
 *
 * void print_alphabet_x10 -> prints 10 times lowercase alphabets
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int j;
	int n;

	for (n = 0; n < 10; n++);
	{
		for (j = 'a'; j <= 'z'; j++);
		{
			_putchar(j);
		}
		_putchar ('\n');
	}
}
