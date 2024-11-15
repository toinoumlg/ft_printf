/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalangu <amalangu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 06:10:01 by amalangu          #+#    #+#             */
/*   Updated: 2024/11/15 06:19:09 by amalangu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchar_int(char c)
{
	ft_putchar_fd(c, 1);
	return 1;
}


int ft_putstr_int(char *s)
{
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}