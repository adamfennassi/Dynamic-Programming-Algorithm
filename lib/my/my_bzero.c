/*
** my_bzero.c - Adam Fennassi
*/

void	my_bzero(char *buff, int size)
{
  int	i;

  i = 0;
  while (i < size)
    {
      buff[i] = '\0';
      i = i + 1;
    }
}
