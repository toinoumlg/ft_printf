/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalangu <amalangu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 08:49:32 by amalangu          #+#    #+#             */
/*   Updated: 2024/11/25 22:01:31 by amalangu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_i(int nb)
{
	char	*str_nb;
	int		len;

	str_nb = ft_itoa(nb);
	len = ft_putstr_int(str_nb);
	free(str_nb);
	return (len);
}
