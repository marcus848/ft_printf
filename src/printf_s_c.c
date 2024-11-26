/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_s_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcudos <marcudos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:56:24 by marcudos          #+#    #+#             */
/*   Updated: 2024/11/26 16:20:49 by marcudos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	print_char(t_spec *spec, va_list args)
{
	char	c;
	int	width;
	int	length;

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
