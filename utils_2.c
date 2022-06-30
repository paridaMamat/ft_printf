/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaimait <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 11:20:24 by pmaimait          #+#    #+#             */
/*   Updated: 2022/06/30 11:20:33 by pmaimait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	print_str(va_list arg, int *arg_re)
{
	char	*str;
	str = va_arg(arg, void *);
	if (str == NULL)
		ft_putstr("(null)", arg_re);
	else
		ft_putstr(str, arg_re);
}

