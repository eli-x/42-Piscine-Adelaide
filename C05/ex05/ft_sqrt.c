int	ft_sqrt(int nb)
{
	int	res;

	res = 1;
	if (nb > 0)
	{
		while (res * res <= nb)
		{
			if (res * res == nb)
				return (res);
			else if (res >= 46341)
				return (0);
			++res;
		}
	}
	return (0);
}
