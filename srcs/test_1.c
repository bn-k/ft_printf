/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbenham <newcratie@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 08:21:31 by abbenham          #+#    #+#             */
/*   Updated: 2018/03/08 17:23:53 by abbenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

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

	printf("___________ 2 ______________\n");
	assertI("%U\n", ULONG_MAX / 2);
	asserts("% T<\n", "");
	asserts("% <\n", "");
}

void	test_2(void)
{
	printf("___________ 2 ______________\n");
	asserts("%s\n", "Met ca dans le coffre");
	assertS("%S\n", L"テキスト");
	assertS("%.S\n", L"hide®");
}

