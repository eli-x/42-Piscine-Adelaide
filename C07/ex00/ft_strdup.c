#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*cpy;

	cpy = malloc(sizeof(*src));
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
/*
#include <stdio.h>

int main()
{
    char str_a[10] = "qazwsxedc";
    char *ptr_a;

    ptr_a = ft_strdup(str_a);
    printf("%s\n", str_a);
    printf("%s\n", ptr_a);
    return (0);
}*/
