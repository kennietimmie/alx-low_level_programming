#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (success)
*/
int main(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
	{
		putchar(c);
	}
	c = 'A';

	while (; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
