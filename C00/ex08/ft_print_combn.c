#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_comb(int first, int n)
{
  int i;

  if (n == 0)
  {
    ft_putchar(',');
    ft_putchar(' ');
  }
  i = first + 1;
  while (i < 10)
  {
    ft_putchar(first + '0');
    ft_putchar(i + '0');
    ft_comb(i, n - 1);
    i++;
  }
}

void ft_print_combn(int n)
{
  ft_comb(0, n);
}

int main(void)
{
  ft_print_combn(2);
  return(0);
}
