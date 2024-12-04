/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcudos <marcudos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:00:44 by marcudos          #+#    #+#             */
/*   Updated: 2024/11/27 19:52:22 by marcudos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	print_width_padding(int width, char pad_char)
{
	int	length;

	length = 0;
	while (width > 0)
	{
		ft_putchar_fd(pad_char, 1);
		width--;
		length++;
	}
	return (length);
}
