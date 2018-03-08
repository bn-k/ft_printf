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

	//assertC("%C\n", 0x11ffff);
	//assertC("%C\n", -2);

	wchar_t s[4];

	assertI("42%#0o\n", 1573511282);
}

void	test_2(void)
{
	printf("___________ 2 ______________\n");
	asserts("%s\n", "Met ca dans le coffre");
	asserts("%.s\n", "hide");
	assertS("%S\n", L"テキスト");
	assertS("%.S\n", L"hide®");
}

