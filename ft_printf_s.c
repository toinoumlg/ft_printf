/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalangu <amalangu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:43:21 by amalangu          #+#    #+#             */
/*   Updated: 2024/11/11 10:24:21 by amalangu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_s(char *c)
{
	int count = 0;
	while (*c)
	{
		ft_putchar_fd(*c, 1);
		count++;
		c++;
	}
	return (count);
}

int	ft_printf_p(void *c)
{
	int count = 0;
	char *str = (char *)c;
	while (*str)
	{
		ft_putchar_fd(*str, 1);
		count++;
		c++;
	}
	return (count);
}
