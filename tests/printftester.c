/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printftester.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcudos <marcudos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:08:11 by marcudos          #+#    #+#             */
/*   Updated: 2024/12/03 15:35:15 by marcudos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "limits.h"

int	main(void)
{
	printf("\"%#-10x\"\n", 0);
	ft_printf("\"%#-10x\"\n", 0);
	// printf("\"%#x\"\n", LONG_MIN);
	ft_printf("\"%#x\"\n", LONG_MIN);
}
