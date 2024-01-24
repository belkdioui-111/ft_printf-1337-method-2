#include"ft_printf.h"

void	ft_putnbr_unsigned(unsigned int n, int *count)
{
	if (n < 10)
		ft_putchar((n + '0'), count);
	else
	{
		ft_putnbr_unsigned((n / 10), count);
		ft_putnbr_unsigned((n % 10), count);
	}
}
