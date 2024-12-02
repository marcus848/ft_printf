/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_p_x_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcudos <marcudos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:51:19 by marcudos          #+#    #+#             */
/*   Updated: 2024/11/27 19:53:04 by marcudos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char	*convert_to_hex(unsigned long value, int uppercase)
{
	unsigned long	tmp;
	char			*hex_digits;
	char			*result;
	int				len;

	hex_digits = hex_uppercase(uppercase);
	tmp = value / 16;
	len = 1;
	while (tmp > 0)
	{
		len++;
		tmp /= 16;
	}
	result = (char *) malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	while (len > 0)
	{
		result[--len] = hex_digits[value % 16];
		value /= 16;
	}
	return (result);
}

char	*hex_uppercase(int uppercase)
{
	if (uppercase)
		return ("0123456789ABCDEF");
	else
		return ("0123456789abcdef");
}

int	print_null_pointer(t_spec *spec)
{
	int	length;

	if (spec->width > 5 && !spec->flag_minus)
		length = print_width_padding(spec->width - 5, ' ');
	else
		length = 0;
	ft_putstr_fd("(nil)", 1);
	length += 5;
	if (spec->width > 5 && spec->flag_minus)
		length += print_width_padding(spec->width - 5, ' ');
	return (length);
}
