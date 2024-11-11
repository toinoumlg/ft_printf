/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalangu <amalangu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 09:19:12 by amalangu          #+#    #+#             */
/*   Updated: 2024/11/11 10:05:53 by amalangu         ###   ########.fr       */
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

int	ft_putnbr_base(long long int nbr, char *base, int count)
{
	int	base_l = ft_check_base(base);
	if (base[0] == '\0' || base[1] == '\0')
		return 0;
	if (base_l == 0)
		return 0;
	else
	{
		if (nbr < 0)
		{
			ft_putchar_fd('-', 1);
			nbr = -nbr;
		}
		if (nbr >= base_l)
		{
			count += ft_putnbr_base(nbr / base_l, base, count);
		}
		ft_putchar_fd(base[nbr % base_l], 1);
		count++;
	}
	return count;
}


int ft_printf_x(long long int nb, char c)
{
	int count; 
	if (c == 'x')
		count = ft_putnbr_base(nb, "0123456789abcdef", 0);
	if (c == 'X')
		count = ft_putnbr_base(nb, "0123456789ABCDEF", 0);
	if (c == 'u')
		count = ft_putnbr_base(nb, "0123456789", 0);
	return count;
}