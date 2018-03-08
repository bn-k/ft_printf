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

#include "test.h"

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
