#include"ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	unsigned int	x;

	x = n;
	if (n < 0)
	{
		ft_putchar('-', count);
		x *= -1;
	}
	if (x > 9)
	{
		ft_putnbr((x / 10), count);
		ft_putnbr((x % 10), count);
	}
	else
		ft_putchar((x + '0'), count);
}
