#include <stdio.h>
/**
* main - A program that prints all possible different combinations
* of two digits
* Return: Always 0 (success)
*/
int main(void)
{
	int first = 48, second;

	for (; first <= 57; first++)
	{
		for (second = 49; second <= 57; second++)
		{
			if (first < second)
			{
				putchar(first);
				putchar(second);
				if (first < 56 || second < 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
