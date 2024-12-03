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
	ft_printf("\"%08.5i\"\n", 34);	
	ft_printf("\"%010.5i\"\n", -216);	
	ft_printf("\"%08.5i\"\n", 0);	
	ft_printf("\"%08.3i\"\n", 8375);	
	ft_printf("\"%08.3i\"\n", -8473);	
	ft_printf("\"%.i\"\n", 0);	
	ft_printf("\"%5.0i\"\n", 0);	
	ft_printf("\"%5.i\"\n", 0);	
	ft_printf("\"%-5.0i\"\n", 0);	
	ft_printf("\"%-5.i\"\n", 0);	
	
}
