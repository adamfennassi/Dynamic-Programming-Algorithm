/*
** create_tab.c - Adam Fennassi
*/

#include <stdlib.h>
#include "my.h"

void	my_create_tab(char *buff)
{
  char	**tab;
  int	i;

  i = 0;
  tab = malloc(sizeof(*tab) * (my_strnbline(buff) + 1));
  if (tab == NULL)
    exit(84);
  while (i < my_strnbline(buff))
    {
      tab[i] = malloc(sizeof(tab) * (my_strlenbn(buff) + 1));
      if (tab[i] == NULL)
	exit(84);
      i = i + 1;
    }
  my_bufftotab(buff, tab, 0, 0);
  redirect(tab, my_strnbline(buff) - 1, my_strlenbn(buff) - 1);
}
