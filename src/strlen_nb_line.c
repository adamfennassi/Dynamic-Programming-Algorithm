/*
** strlen_nb_line.c - Adam Fennassi
*/

#include "my.h"

int	my_strnbline(char *str)
{
  int	i;
  int	save;

  save = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '\n')
	save = save + 1;
      i = i + 1;
    }
  if (str[i - 1] == '\n')
    save = save - 1;
  return (save);
}
