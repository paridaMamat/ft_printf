/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaimait <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:09:14 by pmaimait          #+#    #+#             */
/*   Updated: 2022/06/30 16:09:29 by pmaimait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_base(char *base)
{
	int	i;
	int	z;
	i = 0;
	z = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}
void	ft_putnbr_base(int n, char *base, int *len)
{
	unsigned int	number;
	int				base_len;
	if (check_base(base))
	{
		base_len = 0;
		while (base[base_len])
			base_len++;
		if (n < 0)
		{
			ft_putchar('-', len);
			number = -n;
		}
		else
			number = n;
		if (number > 9)
		{
			ft_putnbr_base(number / base_len, base, len);
			number %= base_len;
		}
		ft_putchar(base[number], len);
	}
}

