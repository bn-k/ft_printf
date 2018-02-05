#include "ft_printf.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	int b = 0;
	(void)ac;
	(void)av;
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
	b += ft_printfjnederlo(s);
	ft_putnuminfo(b, "Return of printf: ");
	return (0);
}
