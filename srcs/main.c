#include "ft_printf.h"
#include <stdio.h>

void	test(wchar_t *s)
{
	if(*s < 0x7FF && *s > 0x80)
		ft_putnbrl(1);
	unsigned char *tab = malloc(3);
	tab[0] = (*s & 0x3F) | 0x80;
	write(1, &tab[0], 1);
	*s = *s >> 6;
	tab[1] = (*s & 0x1F) | 0xc0;
	write(1, &tab[1], 1);
}

int	main(int ac, char **av)
{

	wchar_t *s = malloc(45);
	*s = wcstombs(s,"Ǔ");
	if (ac == 1)
		test(s);
	if (av[1])
	{
		if (av[1][0] == '1')
			test_1();
		if (av[1][0] == '2')
			test_2();
		else 
			test_3(av[1], "string");
	}
	return (0);
}
