/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalangu <amalangu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:57:34 by amalangu          #+#    #+#             */
/*   Updated: 2024/11/11 10:07:58 by amalangu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *s, ...)
{
	va_list args;
	
	va_start(args, s);
	int count = 0;
	while (*s)
	{
		if (*s == '%')
		{
			count += ft_printf_specifier(args, s);
			s++;
		}
		else
		{
			count++;
			ft_putchar_fd(*s, 1);
		}
		s++;
	}
	va_end (args);
	return (count);
}

int main()
{
	int result = printf("Sentence to%% know how many %X\n", 57436853);
	int result_me = ft_printf("Sentence to%% know how many %X\n", 57436853);

    printf("%d characters were written\n", result);
	ft_printf("%d characters were written\n", result_me);
}