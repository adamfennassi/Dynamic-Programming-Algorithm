/*
** my_putchar.c - Adam Fennassi
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
