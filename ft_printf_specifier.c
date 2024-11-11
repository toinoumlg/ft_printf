/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_specifier.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalangu <amalangu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 08:11:20 by amalangu          #+#    #+#             */
/*   Updated: 2024/11/11 08:54:55 by amalangu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf_specifier(va_list args, const char *s)
{
	if (*(s+ 1) == 'c')
		return (ft_printf_c((char)va_arg(args, int)));
	else if (*(s+ 1) == 's')
		return (ft_printf_s(va_arg(args, char*)));	
	// else if (*(s+ 1) == 'p')
	// 	return (ft_printf_p(va_arg(args, char*)));
	else if (*(s+ 1) == 'd')
		return (ft_printf_i(va_arg(args, int)));
	// else if (*(s+ 1) == 's')
	// {
	// 	return (ft_printf_s(va_arg(args, char*)));
	// }	
	// else if (*(s+ 1) == 's')
	// {
	// 	return (ft_printf_s(va_arg(args, char*)));
	// }
	return 0;
}