#include <stdio.h>

ex00
int main()
{
    char s1[20] = "Cprogramming";
    char s2[20] = "cprogramming";
    printf("%d", ft_strcmp(s1, s2));
    return(0);
}

ex01
int main()
{
    char s1[] = "abdc";
    char s2[] = "abad";

    int compare1 = ft_strncmp(s1, s2, 2);
    int compare2 = ft_strncmp(s1, s2, 3);
    int compare3 = ft_strncmp(s1, s2, 4);
    int compare4 = ft_strncmp(s1, s2, 5);
    int compare5 = ft_strncmp(s1, s2, 0);

    printf("1 is %d\n", compare1);
    printf("2 is %d\n", compare2);
    printf("3 is %d\n", compare3);
    printf("4 is %d\n", compare4);
    printf("5 is %d\n", compare5);
    return(0);
}

ex02
int main()
{
	char dest[20] = "ABCDEFG";
	char src[20] = "HIJKLMNOPQRSTUV";

	printf("%s\n", ft_strcat(dest, src));
	return(0);
}

ex03
int	main()
{
	char dest[5] = "ABCD";
	char src[15] = "EFGHIJKLMNOP";

	printf("%s\n", ft_strncat(dest, src, 8));
	return(0);
}

ex04
int main()
{
	char str_a[] = "this is a new line";
	char str_b[] = "ZZ";
	char *result;

	result = ft_strstr(str_a, str_b);
	printf("%s\n", result);
	return(0);
}
