/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalangu <amalangu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:43:21 by amalangu          #+#    #+#             */
/*   Updated: 2024/11/15 07:24:39 by amalangu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_s(char *c)
{
	return (ft_putstr_int(c));
}

int	ft_printf_p(void *c)
{
	write(1, "0x", 2);
	return (ft_putnbr_base((long long int)c, "0123456789abcdef"));
}
