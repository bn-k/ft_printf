#include "ft_printf.h"
#include <stdio.h>

void	test(wchar_t *wc)
{
	ft_putstr_utf8(wc);
}

int	main(int ac, char **av)
{
	if (ac == 1)
		test(L"ભ");
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
