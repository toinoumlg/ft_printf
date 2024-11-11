/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalangu <amalangu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 08:49:32 by amalangu          #+#    #+#             */
/*   Updated: 2024/11/11 08:54:59 by amalangu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf_i(int nb)
{
	char *str_nb;
	str_nb = ft_itoa(nb);
	ft_putstr_fd(str_nb, 1);
	return (ft_strlen(str_nb));
}