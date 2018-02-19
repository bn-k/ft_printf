#include <stdio.h>
#include <locale.h>

void	test(void);
void	test_1(void);
void	test_2(void);
void	test_3(char *s, char *s2);


int	main(int ac, char **av)
{
		setlocale(LC_ALL, "en_US.UTF-8");
	if (ac == 1)
		test();
	else if (av[1])
	{
		if (av[1][0] == '1')
			test_1();
		if (av[1][0] == '2')
			test_2();
		if (ac == 3)
			test_3(av[1], av[2]);
	}
	return (0);
}
