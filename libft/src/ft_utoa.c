/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcudos <marcudos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:01:20 by marcudos          #+#    #+#             */
/*   Updated: 2024/10/22 16:50:24 by marcudos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_how_many_digits(unsigned int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	ft_make_str(char *str, unsigned int num, int digits)
{
	while (num)
	{
		str[digits--] = num % 10 + '0';
		num /= 10;
	}
}

char	*ft_utoa(unsigned int n)
{
	char	*str;
	int		digits;

	digits = ft_how_many_digits(n);
	str = (char *) malloc(sizeof(char) * (digits + 1));
	if (!str)
		return (NULL);
	str[digits--] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	ft_make_str(str, n, digits);
	return (str);
}
