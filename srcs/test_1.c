/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbenham <newcratie@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 08:21:31 by abbenham          #+#    #+#             */
/*   Updated: 2018/02/14 12:16:33 by abbenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"
#include <stdio.h>

void	test_2(void)
{
	int 	number = 1000;
	char *pointer = ft_strdup("WORD");
	printf("Here is a number-%6.1d-and a-%4.s-word.\n", 10, pointer);
	printf("Here is a number-%6d-and a-%5s-word.\n", 444, pointer);
	printf("Here is a number-%6d-and a-%10s-word.\n", 1, pointer);
	ft_memdel((void **)&pointer);
}

void	test_1(void)
{
	char *str = ft_strdup("autre");
	ft_printf("Voici un -%6.005s- test pour -%s-\n", str,"finir");
	ft_printf("Voici un -%6.4s- test pour -%s-\n", str,"finir");
}


void	test_3(char *s, char *s2)
{
			printf(s, s2);
}
