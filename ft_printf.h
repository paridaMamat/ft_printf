/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaimait <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 15:58:56 by pmaimait          #+#    #+#             */
/*   Updated: 2022/06/30 15:59:13 by pmaimait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# if defined (__APPLE__)
#  define PTR_NULL "0x0"
# elif __linux__
#  define PTR_NULL "(nil)"
# endif
int		ft_printf(const char *str, ...);
void	print_char(va_list arg, int *arg_len);
void	print_int(va_list arg, int *arg_len);
void	print_uint(va_list arg, int *arg_len);
void	print_hexa(va_list arg, int *arg_len, char c);
void	print_address_hexa(va_list arg, int *arg_len);
void	print_str(va_list arg, int *arg_len);
#endif
