unsigned int	ft_strlen(char	*str)
{
	unsigned int	i;

	i = 0;
	while(str[i] != '\0')
	{
		++i;
	}
	return(i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	k;

	if (size <= ft_strlen(dest))
	return (size + ft_strlen(src));
	while (	
}
