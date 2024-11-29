/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_i_d_u_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcudos <marcudos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:55:13 by marcudos          #+#    #+#             */
/*   Updated: 2024/11/29 18:53:37 by marcudos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char	*define_sign_or_space(t_spec *spec, long nbr)
{
	if (nbr < 0)
		return ("-");
	if (spec->flag_plus)
		return ("+");
	if (spec->flag_space)
		return (" ");
	return (NULL);
}

char	*add_precision_integer(char *nbr_str, int precision)
{
	char	*padding;
	char	*result;
	int		nbr_len;

	nbr_len = ft_strlen(nbr_str);
	if (precision <= nbr_len)
		return (nbr_str);
	padding = (char *) malloc(precision - nbr_len + 1);
	if (!padding)
	{
		free(nbr_str);
		return (NULL);
	}
	ft_memset(padding, '0', precision - nbr_len);
	padding[precision - nbr_len] = '\0';
	result = ft_strjoin(padding, nbr_str);
	free(padding);
	free(nbr_str);
	return (result);
}

char	*convert_to_str(long nbr, int precision)
{
	char	*nbr_str;

	if (nbr < 0)
		nbr_str = ft_itoa(-nbr);
	else
		nbr_str = ft_itoa(nbr);
	if (!nbr_str)
		return (NULL);
	return (add_precision_integer(nbr_str, precision));
}