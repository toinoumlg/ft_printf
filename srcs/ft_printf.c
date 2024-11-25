/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalangu <amalangu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:57:34 by amalangu          #+#    #+#             */
/*   Updated: 2024/11/25 22:09:25 by amalangu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list args;
	int 	count;
	
	va_start(args, s);
	count = 0;
	while (*s)
	{
		if (*s == '%')
		{
			count += ft_printf_specifier(args, s + 1);
			s++;
		}
		else
			count += ft_putchar_int(*s);
		s++;
	}
	va_end (args);
	return (count);
}