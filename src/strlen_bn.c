/*
** strlen_bn.c - Adam Fennassi
*/

#include <stdio.h>
#include "my.h"

int	my_strlenbn(char *str)
{
  int	i;
  int	a;

  i = 0;
  a = 0;
  while (str[i] != '\n')
    {
      i = i + 1;
      a = a + 1;
    }
  i = i + 1;
  a = a + 1;
  while (str[i] != '\n' && str[i] != '\0')
      i = i + 1;
  return (i - a);
}
