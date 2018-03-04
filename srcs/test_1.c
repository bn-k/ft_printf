/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbenham <newcratie@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 08:21:31 by abbenham          #+#    #+#             */
/*   Updated: 2018/03/04 17:00:20 by abbenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>

void	asserts(char *s, char *s2)
{
	int ft;
	int i;

	printf("--------- assert _________\n");
	ft = ft_printf(s, s2);
	i= printf(s, s2);
	printf("(%d)  (%d)\n", ft, i);
}


void	assertC(char *s, wchar_t s2)
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

	printf("--------- assert %%d %%i _________\n");
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

void	assertP(char *s, void *s2)
{
	int ft;
	int i;

	printf("--------- assert _________\n");
	ft = ft_printf(s, s2);
	i= printf(s, s2);
	printf("(%d)  (%d)\n", ft, i);
}

void	test_3(void)
{
	printf("___________ 3 ______________\n");
}

void	test(void)
{
	test_1();
	//test_2();
	//test_3();
}

void	test_1(void)
{
	int ft;
	int i;
	printf("___________ 1 ______________\n");

	assertI("%00+10.4d\n", 0);
	ft = ft_printf("% 20.12ld et % 05D% 4.8hi !\n", 0x11ffaa147, 24, (short)-2345);
	i = printf("% 20.12ld et % 05D% 4.8hi !\n", 0x11ffaa147, 24, (short)-2345);
	printf("(%d)  (%d)\n", ft, i);
	assertI("%+.5d\n", 55);
	assertI("%+042i\n", -15);
	assertI(">%i<\n", INT_MIN);
	assertI(">%d<\n", INT_MIN);
}

void	test_2(void)
{
	printf("___________ 2 ______________\n");
	asserts("%s\n", "Met ca dans le coffre");
	asserts("%.s\n", "hide");
	assertS("%S\n", L"テキスト");
	assertS("%.S\n", L"hide®");
}

