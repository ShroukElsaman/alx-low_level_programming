#include <stdio.h>

/**
 * main - Entry point
 * Description: "print alphabet"
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alpha = 0;

	while (alpha < 10)
	{
		putchar(alpha + '0');
		alpha++;
	}
	putchar('\n');
	return (0);
}
Footer
