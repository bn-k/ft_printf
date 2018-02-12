
#include "ft_printf.h"
#include <stdio.h>

void	test_2(void)
{
	int 	number = 1000;
	char *pointer = ft_strdup("WORD");
	printf("Here is a number-%6d-and a-%4s-word.\n", 10, pointer);
	printf("Here is a number-%6d-and a-%5s-word.\n", 444, pointer);
	printf("Here is a number-%6d-and a-%10s-word.\n", 1, pointer);
	ft_memdel((void **)&pointer);
}

void	test_1(void)
{
	char *str = ft_strdup("autre");
	ft_printf("Voici un %s test pour %s", str,"finir");
}


void	test_3(char *s, char *s2)
{
			printf(s, s2);
}

