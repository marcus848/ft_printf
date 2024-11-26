/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf_vs_ft_printf.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcudos <marcudos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:26:51 by marcudos          #+#    #+#             */
/*   Updated: 2024/11/26 17:48:49 by marcudos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf.h"

int	main(void)
{
	printf(GREEN ">>>> Testes para caractere: 'c'\n" RESET);
	printf("> Char test (%%c): %c\n", 'A');
	ft_printf("> Char test (XXc): %c\n", 'A');
	printf("> Char test with width (%%5c): %5c\n", 'A');
	ft_printf("> Char test with width (X5c): %5c\n", 'A');
	printf("> Char test with '-' flag (%%-5c): %-5c\n", 'A');
	ft_printf("> Char test with '-' flag (X-5c): %-5c\n\n", 'A');

	printf(GREEN ">>>> Testes para string: 's'\n" RESET);
	printf("> String test (%%s): %s\n", "Hello");
	printf("> String test with width (%%10s): %10s\n", "Hello");
	printf("> String test with '-' flag (%%-10s): %-10s\n", "Hello");
	printf("> String test with precision (%%.3s): %.3s\n\n", "Hello");

	void *ptr = &main;   
	printf(GREEN ">>>> Testes para ponteiro: 'p'\n" RESET);
	printf("> Pointer test (%%p): %p\n", ptr);
	printf("> Pointer test with width (%%20p): %20p\n", ptr);
	printf("> Pointer test with '-' flag (%%-20p): %-20p\n\n", ptr);

	printf(GREEN ">>>> Testes para decimais: 'd'\n" RESET);
	printf("> Decimal test (%%d): %d\n", 42);
	printf("> Decimal test with width (%%10d): %10d\n", 42);
	printf("> Decimal test with '-' flag (%%-10d): %-10d\n", 42);
	printf("> Decimal test with '0' flag (%%010d): %010d\n", 42);
	printf("> Decimal test with '+' flag (%%+d): %+d\n", 42);
	printf("> Decimal test with space flag (%% d): % d\n", 42);
	printf("> Decimal test with precision (%%.2d): %.2d\n", 42);
	printf("> Decimal test with precision and width (%%10.2d): %10.2d\n", 42);
	printf("> Decimal test with precision and '-' flag (%%-.2d): %-.2d\n\n", 42);
	   
	printf(GREEN ">>>> Testes para inteiros: 'i'\n" RESET);  
	printf("> Integer test (%%i): %i\n", 42);
	printf("> Integer test with width (%%10i): %10i\n", 42);
	printf("> Integer test with '-' flag (%%-10i): %-10i\n", 42);
	printf("> Integer test with '0' flag (%%010i): %010i\n", 42);
	printf("> Integer test with '+' flag (%%+i): %+i\n", 42);
	printf("> Integer test with space flag (%% i): % i\n\n", 42);

	printf(GREEN ">>>> Testes para inteiros não sinalizados: 'u'\n" RESET);
	printf("> Unsigned integer test (%%u): %u\n", 42);
	printf("> Unsigned integer with width (%%10u): %10u\n", 42);
	printf("> Unsigned integer with '0' flag (%%010u): %010u\n\n", 42);

	printf(GREEN ">>>> Testes para hexadecimal: 'x' e 'X'\n" RESET);
	printf("> Hexadecimal (lowercase) test (%%x): %x\n", 255);
	printf("> Hexadecimal with width (lowercase) (%%10x): %10x\n", 255);
	printf("> Hexadecimal with '#' flag (lowercase) (%%#x): %#x\n", 255);
	printf("> Hexadecimal with '0' flag (lowercase) (%%010x): %010x\n", 255);
	printf("> Hexadecimal with '-' flag (lowercase) (%%-10x): %-10x\n\n", 255);
	printf("> Hexadecimal (uppercase) test (%%X): %X\n", 255);
	printf("> Hexadecimal with width (uppercase) (%%10X): %10X\n", 255);
	printf("> Hexadecimal with '#' flag (uppercase) (%%#X): %#X\n", 255);
	printf("> Hexadecimal with '0' flag (uppercase) (%%010X): %010X\n", 255);
	printf("> Hexadecimal with '-' flag (uppercase) (%%-10X): %-10X\n\n", 255);

	printf(GREEN ">>>> Teste para o caractere de porcentagem: '%%'\n" RESET);
	printf("> Percent sign test (%%%%): %%\n");
	// printf("> Percent sign with width (%%5%%): %5%\n");
	// printf("> Percent sign with '-' flag (%%-5%%): %-5%\n");

	return (0);
}

