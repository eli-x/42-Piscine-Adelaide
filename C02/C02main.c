#include <stdio.h>

ex01
int main(void)
{
  char  str_d[ ] = "Hello";
  char  str_s[ ] = "You deserve";
  unsigned int  n = 4;

  printf("%s\n", str_d);
  ft_strncpy(str_d, str_s, n);
  printf("%s\n", str_d);
  return (0);
}

ex02
int	main()
{
	int result;

	result = ft_str_is_alpha("asfhdjg");
	printf("Result: %d\n", result);

	result = ft_str_is_alpha("GHGFOJGOEdgkf");
	printf("Result: %d\n", result);

	result = ft_str_is_alpha("907897");
	printf("Result: %d\n", result);

	result = ft_str_is_alpha("dg2323sfg");
	printf("Result: %d\n", result);

	result = ft_str_is_alpha("");
	printf("Result: %d\n", result);

	result = ft_str_is_alpha("f^)%$0jjh");
	printf("Result: %d\n", result);

	return(0);
}
ex03
int	main()
{
	unsigned int result;

	result = ft_str_is_numeric("");
	printf("Result is %d\n", result);

	result = ft_str_is_numeric("1234");
	printf("Result is %d\n", result);

	result = ft_str_is_numeric("sjg45gf");
	printf("Result is %d\n", result);

	return(0);
}

ex04
int main()
{
	int low;

	low = ft_str_is_lowercase("HKHK");
	printf("%d\n", low);

	low = ft_str_is_lowercase("dggg");
	printf("%d\n", low);

	low = ft_str_is_lowercase("low45low");
	printf("%d\n", low);

	low = ft_str_is_lowercase("");
	printf("%d\n", low);

	return (0);
}

ex06
int		main(void)
{
	char string[] = "Normal characters string";
	char *p_str;
	p_str = string;

	char unpr[] = "Unprintables: \t (tab), \a (?)";
	char *p_unp;
	p_unp = unpr;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("-----\n1 = Contains only printable characters\n0 = Contains unprintable characters\n\n");
	printf("%s = %d\n", string, ft_str_is_printable(p_str));
	printf("%s = %d\n", unpr, ft_str_is_printable(p_unp));
	printf("Empty = %d\n-----\n", ft_str_is_printable(p_emp));

	return (0);
}

ex07
int	main()
{
	char str_a[] = "AbCdE789fGHhiH";

	printf("%s\n", ft_strupcase(str_a));
	return(0);
}

ex09
int    main(void)
{
  char str_1[] = "salut, comment or vas ? 12mosfdf fghfgfkjg-glkgjlk";
  char str_2[] = "";
  printf("%s\n", ft_strcapitalize(str_1));
  printf("%s\n", ft_strcapitalize(str_2));
}

ex10
int main(void)
{
	char dest[10];
	char dest_a[10];
	char *src = "ABCDEFGHIJK01234567890123456789";

	ft_strlcpy(dest, src, 4);
	ft_strlcpy(dest_a, src, 9);

	printf("%s", dest);
	printf("\n");
	printf("%s", dest_a);
	return(0);
}
