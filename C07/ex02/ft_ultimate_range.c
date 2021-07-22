#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main()
{
	int	*range;
	int i;

	i = 0;
	printf("%d\n", ft_ultimate_range(&range, 2, 10));
	while (i < 8)
	{
	printf("%d\n", range[i]);
	i++;
	}
	return (0);
}*/
