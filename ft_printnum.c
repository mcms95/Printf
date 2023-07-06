#include "ft_printf.h"

int	ft_printnum(int num)
{
	int		i;
	char	c;

	i = 0;
	if (num == INT_MIN)
	{
		i += ft_printstr("-2147483648");
		return (i);
	}
	if (num < 0)
	{
		i += ft_printchar('-');
		num *= -1;
	}
	if (num >= 10)
	{
		i += ft_printnum(num / 10);
		i += ft_printnum(num % 10);
	}
	else if (num < 10)
	{
		ft_printchar(num + '0');
		i++;
	}
	return (i);
}

/*int main()
{
	int i = ft_printnum(-2147483648);
	printf("\nNumber of characters written: %d\n", i);
	return 0;
}*/