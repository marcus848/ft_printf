/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcudos <marcudos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 10:28:28 by marcudos          #+#    #+#             */
/*   Updated: 2024/12/03 10:43:12 by marcudos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	main(void)
{
	ft_printf("\"%.03s\"\n", NULL);	
	ft_printf("\"%3.1s\"\n", NULL);	
	ft_printf("\"%9.1s\"\n", NULL);	
	ft_printf("\"%-3.1s\"\n", NULL);	
	ft_printf("\"%-9.1s\"\n", NULL);	

	
}
