/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_s_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcudos <marcudos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:56:24 by marcudos          #+#    #+#             */
/*   Updated: 2024/11/29 18:22:48 by marcudos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	print_char(t_spec *spec, va_list args)
{
	char	c;
	int		width;
	int		length;

	c = (char) va_arg(args, int);
	width = spec->width;
	length = 0;
	if (spec->flag_minus)
	{
		ft_putchar_fd(c, 1);
		length++;
		length += print_width_padding(width - 1, define_pad(spec));
	}
	else
	{
		length += print_width_padding(width - 1, define_pad(spec));
		ft_putchar_fd(c, 1);
		length++;
	}
	return (length);
}

int	print_string(t_spec *spec, va_list args)
{
	char	*str;
	int		width;
	int		length;
	int		precision;

	str = (char *) va_arg(args, char *);
	if (!str)
		str = "(nil)";
	width = spec->width;
	length = ft_strlen(str);
	if (spec->is_precision_specified)
		precision = spec->precision;
	else
		precision = length;
	if (spec->flag_minus)
	{
		ft_putnstr_fd(str, precision, 1);
		length += print_width_padding(width - length, define_pad(spec));
	}
	else
	{
		length += print_width_padding(width - length, define_pad(spec));
		ft_putnstr_fd(str, precision, 1);
	}
	return (length);
}

int	print_percent(t_spec *spec)
{
	if (spec->conversion == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	return (0);
}
