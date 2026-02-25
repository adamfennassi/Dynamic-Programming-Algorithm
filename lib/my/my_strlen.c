/*
** my_strlen.c - Adam Fennassi
*/

#include <stdlib.h>

int     my_strlen(char *str)
{
  int   compteur;

  compteur = 0;
  if (str == NULL)
    return (0);
  while (str[compteur] != '\0')
    {
      compteur = compteur + 1;
    }
  return (compteur);
}

