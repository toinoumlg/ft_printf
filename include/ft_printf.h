#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// To remove
# include "../libft/libft.h"
# include <stdio.h>
#include <string.h>

#include <stdarg.h>

int ft_putchar_int(char c);
int ft_putstr_int(char *s);

int	ft_printf(const char *, ...);
int	ft_printf_specifier(va_list args, const char *s);

int ft_printf_c(char c);
int	ft_printf_s(char *c);

int ft_printf_i(int nb);
int ft_printf_x(long long int nb, char c);

int	ft_printf_p(void *c);
int	ft_putnbr_base(long long int nbr, char *base);

# endif
