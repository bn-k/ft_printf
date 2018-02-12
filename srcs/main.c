#include "ft_printf.h"
#include <stdio.h>

void	test(void)
{
	int b = 0;
	char *s;

	s = ft_strdup("Une chaine de caractère%d\n");

	ft_putendl("--------ft_printf-----------");
	b += ft_printf(s, b);
	ft_putnuminfo(b, "Return of printf: ");
	b = 0;
	ft_putendl("----------printf------------");
	b += printf(s, b);
	ft_putnuminfo(b, "Return of printf: ");
	b = 0;
	ft_putendl("---------jnederlo-----------");
	b += ft_printfjnederlo(s, b);
	;
	ft_putnuminfo(b, "Return of printf: ");

}

int	main(int ac, char **av)
{

	if (!ac)
		test();
	if (av[1])
	{
		if (av[1][0] == '1')
			test_1();
		if (av[1][0] == '2')
			test_2();
	}
	return (0);
}
