/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouaraqa <zouaraqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:45:21 by zouaraqa          #+#    #+#             */
/*   Updated: 2022/10/18 14:59:44 by zouaraqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_putnbr_adrs(unsigned long int n, char c, int *count)
{
	unsigned int	len;
	char			*base;

	len = 16;
	base = "0123456789abcdef";
	if (n < len)
		ft_putchar(base[n % len], count);
	else
	{
		ft_putnbr_adrs((n / len), c, count);
		ft_putnbr_adrs((n % len), c, count);
	}
}

void	ft_putp(void *p, int *count)
{
	unsigned long int	x;

	x = (unsigned long int)p;
	ft_putstr("0x", count);
	ft_putnbr_adrs(x, 'x', count);
}
