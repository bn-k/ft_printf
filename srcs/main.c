#include "test.h"

int	main(int ac, char **av)
{
//		setlocale(LC_ALL, "en_US.UTF-8");
	//	setlocale(LC_ALL, "");
	if (ac == 1)
		test();
	else if (av[1])
	{
		if (av[1][0] == '1')
			test_1();
		if (av[1][0] == '2')
			test_2();
		if (ac == 3)
			test_3();
	}
	return (0);
}
