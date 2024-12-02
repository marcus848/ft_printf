/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_francinette.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcudos <marcudos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 09:47:50 by marcudos          #+#    #+#             */
/*   Updated: 2024/12/02 09:51:40 by marcudos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <limits.h>

int	main(void)
{
	printf(GREEN ">>>>> ERROS %%s  <<<<<\n" RESET);
	printf(">> NULL %%s NULL -> não compila\n");
	ft_printf(YELLOW ">> NULL %s NULL \n\n" RESET, NULL);

	printf(GREEN ">>>>> ERROS %%d  <<<<<\n" RESET);
	printf(">> INT_MIN %%d: %d\n", INT_MIN);
	ft_printf(YELLOW ">> INT_MIN %%d: %d\n" RESET, INT_MIN);
	printf(">> long line: -> não compila");
	ft_printf(YELLOW ">> long line: %d %d %d %d %d %d %d" RESET, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);



}
