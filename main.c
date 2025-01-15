#include <stdio.h>
#include <limits.h>
#include "include/ft_printf.h"

int main(void)
{
/* 	printf("TEST PACO 1 :\n");
	printf("Attendue :\n");
	printf("%d\n", printf(" %p %p ", LONG_MIN, LONG_MAX));
	printf("Retourné :\n");
	printf("%d\n", ft_printf(" %p %p ", LONG_MIN, LONG_MAX));

	printf("TEST PACO 1 :\n");
	printf("Attendue :\n");
	printf("%d\n", printf(" %p %p ", 0, 0));
	printf("Retourné :\n");
	printf("%d\n", ft_printf(" %p %p ", 0, 0)); */

	printf("test 1 :\n");
	printf("Attendue :\n");
	printf("  %d\n", printf("Hello, world!"));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("Hello, world!"));

	printf("test 2 :\n");
	printf("Attendue :\n");
	printf("  %d\n", printf("%c", 'y'));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("%c", 'y'));

	printf("test 3 :\n");
	char *s = "Yo la team !!!";
	printf("Attendue :\n");
	printf("  %d\n", printf("%s", s));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("%s", s));

	printf("test 4 :\n");
	void	*p;
	printf("Attendue :\n");
	printf("  %d\n", printf("%p", &p));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("%p", &p));

	printf("test 5 :\n");
	int	i = 1587;
	printf("Attendue :\n");
	printf("  %d\n", printf("%d", i));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("%d", i));

	printf("test 6 :\n");
	i = 123456789;
	printf("Attendue :\n");
	printf("  %d\n", printf("%i", i));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("%i", i));

	printf("test 7 :\n");
	unsigned int u = 4294967295;
	printf("Attendue :\n");
	printf("  %d\n", printf("%u", u));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("%u", u));

	printf("test 8 :\n");
	printf("Attendue :\n");
	printf("  %d\n", printf("%x", 789));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("%x", 789));

	printf("test 9 :\n");
	printf("Attendue :\n");
	printf("  %d\n", printf("%X", 456));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("%X", 456));

	printf("test 10 :\n");
	printf("Attendue :\n");
	printf("  %d\n", printf("%%"));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("%%"));

	printf("test 11 :\n");
	printf("Attendue :\n");
	printf("  %d\n", printf("%"));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("%"));

	printf("test 12 :\n");
	printf("Attendue :\n");
	printf("  %d\n", printf("%%%"));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("%%%"));

	printf("test 13 :\n");
	printf("Attendue :\n");
	printf("  %d\n", printf("Text with % at the end%"));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("Text with % at the end%"));

	printf("test 14 :\n");
	printf("Attendue :\n");
	printf("  %d\n", printf("%p", NULL));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("%p", NULL));

	printf("test 15 :\n");
	int l;
	printf("Attendue :\n");
	printf("  %d\n", printf("%p", &l + 1));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("%p", &l + 1));

	printf("test 16 :\n");
	printf("Attendue :\n");
	printf("  %d\n", printf("%p", (void *)0));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("%p", (void *)0));

	printf("test 17 :\n");
	printf("Attendue :\n");
	printf("  %d\n", printf("Char: %c, String: %s, Decimal: %d, Pointer: %p", 'A', "coucou", 42, &l));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("Char: %c, String: %s, Decimal: %d, Pointer: %p", 'A', "coucou", 42, &l));

	printf("test 18 :\n");
	printf("Attendue :\n");
	printf("  %d\n", printf("%d, %i, %u\n", -123, 123, 4294967295u));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("%d, %i, %u\n", -123, 123, 4294967295u));

	printf("test 19 :\n");
	printf("Attendue :\n");
	printf("  %d\n", printf("%d", INT_MAX));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("%d", INT_MAX));

	printf("test 20 :\n");
	printf("Attendue :\n");
	printf("  %d\n", printf("%d", INT_MIN));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("%d", INT_MIN));

	printf("test 21 :\n");
	printf("Attendue :\n");
	printf("  %d\n", printf("%u", UINT_MAX));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("%u", UINT_MAX));

	printf("test 22 :\n");
	printf("Attendue :\n");
	printf("  %d\n", printf("%p", (void *)ULONG_MAX));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("%p", (void *)ULONG_MAX));

	printf("test 23 :\n");
	printf("Attendue :\n");
	printf("  %d\n", printf("%p", (void *)-1));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("%p", (void *)-1));

	printf("test 24 :\n");
	printf("Attendue :\n");
	printf("  %d\n", printf("%s", ""));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("%s", ""));

	printf("test 25 :\n");
	printf("Attendue :\n");
	printf("  %d\n", printf("%s", NULL));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("%s", NULL));

	printf("test 26 :\n");
	printf("Attendue :\n");
	printf("  %d\n", printf("%s", "0123456789qwertyuiopasdfghjklzxcvbnm12345678901234567890"));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("%s", "0123456789qwertyuiopasdfghjklzxcvbnm12345678901234567890"));

	printf("test 27 :\n");
	printf("Attendue :\n");
	printf("  %d\n", printf("%s", "This is 100%% true !"));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("%s", "This is 100%% true !"));

	printf("test 28 :\n");
	printf("Attendue :\n");
	printf("  %d\n", printf("%z", 42));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("%z", 42));

	printf("test 29 :\n");
	printf("Attendue :\n");
	printf("  %d\n", printf("%.", 42));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("%.", 42));

	printf("test 30 :\n");
	printf("Attendue :\n");
	printf("  %d\n", printf("%s%s%s%s%s", "coucou", "la", "team", "comment", "va"));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("%s%s%s%s%s", "coucou", "la", "team", "comment", "va"));

	printf("test 31 :\n");
	printf("Attendue :\n");
	printf("  %d\n", printf("%d", NULL));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("%d", NULL));

	printf("test 32 :\n");
	printf("Attendue :\n");
	printf("  %d\n", printf("Missed: %d %s %p", 42));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("Missed: %d %s %p", 42));

	printf("test 33 :\n");
	printf("Attendue :\n");
	printf("  %d\n", printf("Extra: %d %d %d", 1, 2, 3, 4, 5));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf("Extra: %d %d %d", 1, 2, 3, 4, 5));

	printf("test 34 :\n");
	printf("Attendue :\n");
	printf("  %d\n", printf(NULL));
	printf("Retourné :\n");
	printf("  %d\n\n", ft_printf(NULL));

/* 	//(test antoine)
	unsigned long long large_ptr_value = 0xFFFFFFFFFFFFFFFF;
	void *large_ptr = (void *)large_ptr_value;
	printf("Test de %%p avec printf (grand pointeur) :	%p\n", large_ptr);
	ft_printf("Test de %%p avec ft_printf (grand pointeur) :	%p\n", large_ptr); */

	return 0;
}