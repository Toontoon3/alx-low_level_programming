#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * my hello, putchar task
 * Retur: return 1 after program execution
 * Description: use to print to standard output in the main function
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
