/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbenham <newcratie@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 08:21:31 by abbenham          #+#    #+#             */
/*   Updated: 2018/02/27 17:06:03 by abbenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>

void	assert(char *s, char *s2)
{
	int ft;
	int i;

	printf("--------- assert _________\n");
	ft = ft_printf(s, s2);
	i= printf(s, s2);
	printf("(%d)  (%d)\n", ft, i);
}

void	assertc(char *s, char s2)
{
	int ft;
	int i;

	printf("--------- assert _________\n");
	ft = ft_printf(s, s2);
	i= printf(s, s2);
	printf("(%d)  (%d)\n", ft, i);
}

void	assertI(char *s, long long s2)
{
	int ft;
	int i;

	printf("--------- assert _________\n");
	ft = ft_printf(s, s2);
	i= printf(s, s2);
	printf("(%d)  (%d)\n", ft, i);
}

void	assertS(char *s, wchar_t *s2)
{
	int ft;
	int i;

	printf("--------- assert _________\n");
	ft = ft_printf(s, s2);
	i= printf(s, s2);
	printf("(%d)  (%d)\n", ft, i);
}

void	test(void)
{
	//printf("___________ 0 ______________\n");
	int ft;
	int i;
	printf("___________ 1 ______________\n");


	assertc("salut et >%c< \n", 'v');
	assertc("salut et >%c< \n", 0);
	assertc("salut et >%c< balabet balbal  \n", 'h');
	assertc("salut et >%c< balabet balbal  \n", 'h');

}

void	test_1(void)
{
}

void	test_2(void)
{
	printf("___________ 2 ______________\n");
}

void	test_3(char *s, char *s2)
{
	printf("___________ 3 ______________\n");
	(void)s;
	(void)s2;
	//int i;
	//i = ft_printf("{%S}\n", NULL);
	//i = printf("pp{%S}", NULL);
	//ft_putnbrl(ft_nbrlen(ft_atoi(s2)));
}
