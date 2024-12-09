/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcudos <marcudos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 18:26:16 by marcudos          #+#    #+#             */
/*   Updated: 2024/12/06 20:08:34 by marcudos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "../include/ft_printf.h"


void run_tests(const char *format, int num_params, ...);

int	main()
{
    	// Conversão 'c'
	printf(GREEN "\n>>>>> TESTING \"C\" <<<<<\n" RESET);
	printf(GREEN "Testing format: %%c\n" RESET);
	run_tests("%c", 20, 'A', '\n', '\0', 'Z', '!', '@', '#', '1', '9', '-', '=', '+', '*', '/', '%', '^', '&', '|', '~', ' ');

	printf(GREEN "Testing format: %%-5c\n" RESET);
	run_tests("%-5c", 5, 'A', 'B', 'C', 'D', 'E');

	printf(GREEN "Testing format: %%5c\n" RESET);
	run_tests("%5c", 5, 'A', 'B', 'C', 'D', 'E');

	printf(GREEN "Testing format: %%-1c\n" RESET);
	run_tests("%-1c", 5, 'A', 'B', 'C', 'D', 'E');

	printf(GREEN "Testing format: %%1c\n" RESET);
	run_tests("%1c", 5, 'A', 'B', 'C', 'D', 'E');

	printf(GREEN "Testing format: %%-05c\n" RESET);
	run_tests("%-05c", 5, 'A', 'B', 'C', 'D', 'E'); // Caso inválido de flag

	// Conversão 's'
	printf(GREEN "\n>>>>> TESTING \"S\" <<<<<\n" RESET);
	printf(GREEN "Testing format: %%s\n" RESET);
	run_tests("%s", 10, "", "Hello", "World", "Test", "12345", "\tTab", "\nNewline", "NULL", "Special chars !@#", "Long string with spaces and symbols @#$%^&*()[]{}.");

	printf(GREEN "Testing format: %%5s\n" RESET);
	run_tests("%5s", 5, "A", "AB", "ABC", "ABCD", "ABCDE");

	printf(GREEN "Testing format: %%-5s\n" RESET);
	run_tests("%-5s", 5, "A", "AB", "ABC", "ABCD", "ABCDE");

	printf(GREEN "Testing format: %%.3s\n" RESET);
	run_tests("%.3s", 5, "ABCDE", "Hello", "World", "Test", "12345");

	printf(GREEN "Testing format: %%-5.3s\n" RESET);
	run_tests("%-5.3s", 5, "ABCDE", "Hello", "World", "Test", "12345");

	// Conversão 'p'
	printf(GREEN "\n>>>>> TESTING \"P\" <<<<<\n" RESET);
	void *ptrs[] = {&main, NULL, (void *)12345, (void *)0xDEADBEEF};
	printf(GREEN "Testing format: %%p\n" RESET);
	run_tests("%p", 4, ptrs[0], ptrs[1], ptrs[2], ptrs[3]);

	printf(GREEN "Testing format: %%-20p\n" RESET);
	run_tests("%-20p", 4, ptrs[0], ptrs[1], ptrs[2], ptrs[3]);

	printf(GREEN "Testing format: %%020p\n" RESET);
	run_tests("%020p", 4, ptrs[0], ptrs[1], ptrs[2], ptrs[3]);

	// Conversão 'd' e 'i'
	printf(GREEN "\n>>>>> TESTING \"d\" <<<<<\n" RESET);
	printf(GREEN "Testing format: %%d\n" RESET);
	run_tests("%d", 7, 0, 1, -1, 123, -123, 2147483647, -2147483648);

	printf(GREEN "Testing format: %%5d\n" RESET);
	run_tests("%5d", 7, 0, 1, -1, 123, -123, 2147483647, -2147483648);

	printf(GREEN "Testing format: %%-5d\n" RESET);
	run_tests("%-5d", 7, 0, 1, -1, 123, -123, 2147483647, -2147483648);

	printf(GREEN "Testing format: %%+d\n" RESET);
	run_tests("%+d", 7, 1, -1, 123, -123, 2147483647, -2147483648);

	printf(GREEN "Testing format: %% d\n" RESET);
	run_tests("% d", 7, 1, -1, 123, -123, 2147483647, -2147483648);

	printf(GREEN "Testing format: %%05d\n" RESET);
	run_tests("%05d", 7, 0, 1, -1, 123, -123, 2147483647, -2147483648);

	// Conversão 'u'
	printf(GREEN "\n>>>>> TESTING \"U\" <<<<<\n" RESET);
	printf(GREEN "Testing format: %%u\n" RESET);
	run_tests("%u", 4, 0, 1, 123, 4294967295);

	printf(GREEN "Testing format: %%5u\n" RESET);
	run_tests("%5u", 4, 0, 1, 123, 4294967295);

	printf(GREEN "Testing format: %%-5u\n" RESET);
	run_tests("%-5u", 4, 0, 1, 123, 4294967295);

	printf(GREEN "Testing format: %%05u\n" RESET);
	run_tests("%05u", 4, 0, 1, 123, 4294967295);

	// Conversão 'x' e 'X'
	printf(GREEN "\n>>>>> TESTING \"X (lowcase)\" <<<<<\n" RESET);
	printf(GREEN "Testing format: %%x\n" RESET);
	run_tests("%x", 6, 0, 1, 255, 4095, 0x7FFFFFFF, 0xFFFFFFFF);

	printf(GREEN "Testing format: %%#x\n" RESET);
	run_tests("%#x", 6, 0, 1, 255, 4095, 0x7FFFFFFF, 0xFFFFFFFF);

	printf(GREEN ">>>>> TESTING \"X (uppercase)\" <<<<<\n" RESET);
	printf(GREEN "Testing format: %%X\n" RESET);
	run_tests("%X", 6, 0, 1, 255, 4095, 0x7FFFFFFF, 0xFFFFFFFF);

	printf(GREEN "Testing format: %%#X\n" RESET);
	run_tests("%#X", 6, 0, 1, 255, 4095, 0x7FFFFFFF, 0xFFFFFFFF);

	// Conversão '%'
	printf(GREEN "\n>>>>> TESTING \"%%\" <<<<<\n" RESET);
	printf(GREEN "Testing format: %%%%\n" RESET);
	run_tests("%%", 1);

	return 0;
}

void	run_tests(const char *format, int num_params, ...)
{
	va_list args;
	va_start(args, num_params);

	while (num_params--)
	{
		void *arg = va_arg(args, void *);

		printf("printf output: ");
		printf(format, arg);  // Usa o mesmo argumento
		printf("\n");

		// Redireciona a saída de ft_printf para um buffer
		char buffer[1024];
		ft_memset(buffer, 0, sizeof(buffer));
		FILE *tmp = freopen("tmp.txt", "w+", stdout);
		ft_printf(format, arg);
		fflush(stdout);
		fseek(tmp, 0, SEEK_SET);
		fread(buffer, 1, sizeof(buffer), tmp);
		freopen("/dev/tty", "w", stdout);  // Restaura stdout

		printf(YELLOW "ft_printf output: " RESET "%s\n", buffer);
	}

	va_end(args);
}
