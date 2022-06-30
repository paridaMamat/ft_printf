/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaimait <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:08:19 by pmaimait          #+#    #+#             */
/*   Updated: 2022/06/30 16:08:25 by pmaimait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void	ft_putnbr(int n, int *base_len)
{
	unsigned int	number;
	if (n < 0)
	{
		ft_putchar('-', base_len);
		number = -n;
	}
	else
		number = n;
	if (number > 9)
	{
		ft_putnbr(number / 10, base_len);
		number %= 10;
	}
	ft_putchar(number + '0', base_len);
}

