#include <stdlib.h>

int	ft_the_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if ( c == charset[i])
			return (1);
		i++;
	}
}

int	ft_count_str(char *str, char *charset)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		while (str[i] && ft_the_sep(str[i], charset))
			i++;
		if (str[i] && !ft_the_sep(str[i], charset))
		{
			while (str[i] && !ft_the_sep(str[i], charset))
				i++;
			counter++;
		}
	}
	return (counter);
}


