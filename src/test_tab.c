/*
** test_tab.c - Adam Fennassi
*/

#include <stdio.h>
#include "struct.h"
#include "my.h"

int	test_tab(int tmp, char **tab, int width, int lenght)
{
  int	i;

  i = 1;
  if (tab[lenght][width] != '.')
    return (0);
  while (i < tmp)
    {
      if (tab[lenght][width + i] != '.'  || tab[lenght + i][width] != '.')
        return (0);
      i = i + 1;
    }
  return (1);
}
