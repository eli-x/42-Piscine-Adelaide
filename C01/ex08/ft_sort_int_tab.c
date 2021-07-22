//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	tab[7] = {25, -35, 4, 0, 8, 18, 9};
	ft_sort_int_tab(tab, 7);
	for (int i = 0; i < 7; i++)
	{
		printf("%d", tab[i]);
	}
}*/
