/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouaraqa <zouaraqa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:29:01 by zouaraqa          #+#    #+#             */
/*   Updated: 2022/10/18 15:02:36 by zouaraqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
