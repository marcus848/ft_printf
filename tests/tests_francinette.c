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
	printf(">> UINT_MAX %%u: %u\n", UINT_MAX);
	ft_printf(YELLOW ">> UINT_MAX %%u: %u\n" RESET, UINT_MAX);

	printf(GREEN "\n>>>>> BONUS PARTE ERROS <<<<<\n\n" RESET);
	printf(RED ">>>>> ERROS %%p <<<<<\n" RESET);
	ft_printf(YELLOW " %-11p %-12p \n" RESET, INT_MIN, INT_MAX);
	ft_printf(YELLOW " %-11p %-12p \n\n" RESET, ULONG_MAX, -ULONG_MAX);
	// printf(" %-13p %-14p ", ULONG_MAX, -ULONG_MAX);

	printf(RED ">>>>> ERROS %%s <<<<<\n" RESET);
	printf(" %.s teste\n", "-");
	ft_printf(YELLOW " %.s teste\n" RESET, "-");
	printf(" %.1s %.2s %.3s %.4s \n", " - ", "", "4", "");
	ft_printf(YELLOW " %.1s %.2s %.3s %.4s \n" RESET, " - ", "", "4", "");
	printf(" %.2s %.3s %.4s %.5s %.1s \n", " - ", "", "4", "", "2 ");
	ft_printf(YELLOW " %.2s %.3s %.4s %.5s %.1s \n" RESET, " - ", "", "4", "", "2 ");
	ft_printf("%7.5s\n", "bombastic");
	ft_printf("%-7.5s\n", "tubular");
	ft_printf("%7.3s%7.7s\n", "hello", "world");
	printf(RED ">>>>> ERROS %%x <<<<<\n" RESET);
	printf("%#5.4x\n", 42);
	ft_printf("%#5.4x\n", 42);
	printf("%#8x\n", 42);
	// printf(" %.2x ", 1); 
	// printf(" %.2x ", 10); 
	// printf(" %.2x ", 11); 
	// printf(" %.2x ", 15); 
	// printf(" %.2x ", 16); 
	// printf(" %.2x ", 17); 
	// printf(" %.2x ", 101); 
	// printf(" %.2x ", INT_MIN); 
	// printf(" %.2x ", LONG_MAX); 
	// printf(" %.2x ", LONG_MIN); 
	// printf(" %.2x ", UINT_MAX); 
	// printf(" %.2x ", ULONG_MAX); 
	// // printf(" %.2x ", 9223372036854775807LL); 
	// printf(" %.8x %.9x %.10x %.11x %.12x %.13x %.14x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	

}
