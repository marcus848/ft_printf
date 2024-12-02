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
	printf(RED ">>>>> ERROS %%s  <<<<<\n" RESET);
	printf(">> NULL %%s NULL -> não compila\n");
	ft_printf(YELLOW ">> NULL %s NULL \n\n" RESET, NULL);

	printf(RED ">>>>> ERROS %%d  <<<<<\n" RESET);
	printf(">> INT_MIN %%d: %d\n", INT_MIN);
	ft_printf(YELLOW ">> INT_MIN %%d: %d\n" RESET, INT_MIN);
	printf(">> long line: -> não compila\n");
	ft_printf(YELLOW ">> long line: %d %d %d %d %d %d %d\n\n" RESET, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

	printf(RED ">>>>> ERROS %%i  <<<<<\n" RESET);
	printf(">> INT_MIN %%i: %i\n", INT_MIN);
	ft_printf(YELLOW ">> INT_MIN %%i: %i\n" RESET, INT_MIN);
	printf(">> long line: -> não compila\n");
	ft_printf(YELLOW ">> long line: %i %i %i %i %i %i %i\n\n" RESET, INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

	printf(RED ">>>>> ERROS %%u  <<<<<\n" RESET);
	printf(">> -1 %%u: %u\n", -1);
	ft_printf(YELLOW ">> -1 %%u: %u\n" RESET, -1);
	printf(">> -9 %%u: %u\n", -9);
	ft_printf(YELLOW ">> -9 %%u: %u\n" RESET, -9);
	printf(">> -10 %%u: %u\n", -10);
	printf(YELLOW ">> -10 %%u: %u\n" RESET, -10);
	printf(">> -11 %%u: %u\n", -11);
	printf(YELLOW ">> -11 %%u: %u\n" RESET, -11);
	printf(">> -14 %%u: %u\n", -14);
	printf(YELLOW ">> -14 %%u: %u\n" RESET, -14);
	printf(">> -15 %%u: %u\n", -15);
	printf(YELLOW ">> -15 %%u: %u\n" RESET, -15);
	printf(">> -16 %%u: %u\n", -16);
	printf(YELLOW ">> -16 %%u: %u\n" RESET, -16);
	printf(">> -99 %%u: %u\n", -99);
	printf(YELLOW ">> -99 %%u: %u\n" RESET, -99);
	printf(">> -100 %%u: %u\n", -100);
	ft_printf(YELLOW ">> -100 %%u: %u\n" RESET, -100);
	printf(">> -101 %%u: %u\n", -101);
	ft_printf(YELLOW ">> -101 %%u: %u\n" RESET, -101);
	printf(">> INT_MIN %%u: %u\n", INT_MIN);
	ft_printf(YELLOW ">> INT_MIN %%u: %u\n" RESET, INT_MIN);
	// printf(">> LONG_MAX %%u: %u\n", LONG_MAX);
	printf(">> UINT_MAX %%u: %u\n", UINT_MAX);
	ft_printf(YELLOW ">> UINT_MAX %%u: %u\n" RESET, UINT_MAX);
	// printf(">> ULONG_MAX %%u: %u\n", ULONG_MAX);
	// printf(">> Numero grande %%u: %u\n", 9223372036854775807LL);
	// printf(">> Long line: %-9u %-10u %-11u %-12u %-13u %-14u %-15u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
}
