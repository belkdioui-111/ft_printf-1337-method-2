#include"ft_printf.h"

void	ft_putnbr_base(unsigned int n, char c, int *count)
{
	unsigned int	len;
	char			*base;

	len = 16;
	if (c == 'x')
		base = "0123456789abcdef";
	else if (c == 'X')
		base = "0123456789ABCDEF";
	if (n < len)
		ft_putchar(base[n % len], count);
	else
	{
		ft_putnbr_base((n / len), c, count);
		ft_putnbr_base((n % len), c, count);
	}
}
