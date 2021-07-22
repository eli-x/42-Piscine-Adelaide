#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*joins;

	j = 0;
	k = 0;
	joins = (char *)malloc(sizeof(strs));
	if (joins == NULL)
	{
		return (0);
	}
	while (k < size)
	{
		i = 0;
		while (strs[k][i] != '\0')
			joins[j++] = strs[k][i++];
		i = 0;
		while (sep[i] != '\0' && k != size - 1)
			joins[j++] = sep[i++];
		k++;
	}
	joins[j] = '\0';
	return (joins);
}
/*
int	main(void)
{
	char	*tab[4];

	tab[0] = "AB";
	tab[1] = "CD";
	tab[2] = "EF";
	tab[3] = "GH";
	printf("%s\n", ft_strjoin(3, tab, "---"));

	return (0);
}*/
