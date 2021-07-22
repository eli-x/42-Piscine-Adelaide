void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	reverse;
	int	temp;

	i = 0;
	reverse = size - 1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab [reverse];
		tab[reverse] = temp;
		i++;
		reverse--;
	}
}
