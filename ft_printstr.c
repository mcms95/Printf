#include "ft_printf.h"

int	ft_printstr(char *str)
{
	long	size;

	size = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		size = 6;
		return (size);
	}
	while (str[size] != '\0')
		ft_printchar(str[size++]);
	return (size);
}

/*int main()
{
	printf("%s\n", "nuno");
	ft_printstr("nuno\n");
	int a = printf("%s\n", "nuno");
	int b = ft_printstr("nuno\n");
	printf("a = %d  b = %d\n", a, b);
}*/
