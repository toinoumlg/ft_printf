/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalangu <amalangu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:43:21 by amalangu          #+#    #+#             */
/*   Updated: 2024/11/25 22:03:57 by amalangu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_p(void *c)
{
	int		count;
	long	nbr;

	nbr = (unsigned long)c;
	if (nbr == 0)
		return (ft_putstr_int("(nil)"));
	count = ft_putstr_int("0x");
	count += ft_putnbr_base(nbr, "0123456789abcdef");
	return (count);
}
