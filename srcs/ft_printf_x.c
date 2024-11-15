/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalangu <amalangu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 09:19:12 by amalangu          #+#    #+#             */
/*   Updated: 2024/11/15 06:56:42 by amalangu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_base(char *base)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	i = 1;
	while (base[len])
	{
		if (base[len] == '-' || base[len] == '+')
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		len++;
		i++;
	}
	return (len);
}

int	ft_putnbr_base(long long int nbr, char *base)
{
	int		count;
	int		base_l;
	char	digits[50];
	int		i;

	if (base[0] == 0 || base[1] == 0)
		return (0);
	count = 0;
	base_l = ft_check_base(base);
	if (base_l == 0)
		return (0);
	if (nbr == 0)
		return (ft_putchar_int(base[0]));
	if (nbr < 0)
	{
		count += ft_putchar_int('-');
		nbr = -nbr;
	}
	i = 0;
	while (nbr > 0)
	{
		digits[i++] = base[nbr % base_l];
		nbr /= base_l;
	}
	while (--i >= 0)
	{
		count += ft_putchar_int(digits[i]);
	}
	return (count);
}

int	ft_printf_x(long long int nb, char c)
{
	int count;
	if (c == 'x')
		count = ft_putnbr_base(nb, "0123456789abcdef");
	if (c == 'X')
		count = ft_putnbr_base(nb, "0123456789ABCDEF");
	if (c == 'u')
		count = ft_putnbr_base(nb, "0123456789");
	return (count);
}