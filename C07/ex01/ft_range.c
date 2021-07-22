#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		diff;
	int		i;
	int		*res;

	diff = max - min;
	i = 0;
	if (diff == 0 || diff < 0)
		return (NULL);
	res = malloc(diff * sizeof(int));
	while (min < max)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (res);
}
/*
#include <stdio.h>
int	main()
{
	int *test0;
	int	i = 0;

	test0 = ft_range(31, 38);
	while (i < 7)
	{
		printf("%d\n", test0[i]);
		i++;
	}
}*/
