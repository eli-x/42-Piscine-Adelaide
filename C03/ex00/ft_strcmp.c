int	ft_strcmp(char *s1, char *s2)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	while (*ptr1 && (*ptr1 == *ptr2))
	{
		++ptr1;
		++ptr2;
	}
	return (*ptr1 - *ptr2);
}
