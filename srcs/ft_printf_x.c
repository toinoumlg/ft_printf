/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalangu <amalangu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 09:19:12 by amalangu          #+#    #+#             */
/*   Updated: 2024/11/25 22:02:51 by amalangu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long nbr, char *base)
{
	int		count;
	int		base_l;
	char	digits[20];
	int		i;

	count = 0;
	base_l = ft_strlen(base);
	if (nbr == 0)
		return (ft_putchar_int(base[0]));
	i = 0;
	while (nbr > 0)
	{
		digits[i++] = base[nbr % base_l];
		nbr /= base_l;
	}
	while (--i >= 0)
		count += ft_putchar_int(digits[i]);
	return (count);
}

int	ft_printf_x(unsigned int nb, char c)
{
	int	count;

	if (c == 'x')
		count = ft_putnbr_base(nb, "0123456789abcdef");
	if (c == 'X')
		count = ft_putnbr_base(nb, "0123456789ABCDEF");
	if (c == 'u')
		count = ft_putnbr_base(nb, "0123456789");
	return (count);
}
