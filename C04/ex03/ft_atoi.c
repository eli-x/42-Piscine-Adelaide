int	ft_atoi(char *str)
{
	int	i;
	int	odd_even;
	int	result;

	i = 0;
	odd_even = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		++i;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			odd_even *= -1;
		++i;
	}
	result = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = (str[i] - '0') + (result * 10);
		++i;
	}
	return (result * odd_even);
}
