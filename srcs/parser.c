/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbenham <newcratie@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 08:24:33 by abbenham          #+#    #+#             */
/*   Updated: 2018/02/14 11:18:48 by abbenham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

const t_function_type func_tab[] = {
	{'s', s_spec},
	{'d', d_spec}
};

size_t	new_format(va_list ap, const char **format)
{
	int i;
	size_t	count;
	char *s;
	t_mark mk;

	i = 0;
	count = 0;
	(*format)++;
	format_parsing(format, &mk);
	//ft_putnbrl(mk.width);
	while (i < 2)
	{
		if (*format[0] == func_tab[i].type)
			count = func_tab[i].t_function_type(ap, *format, mk);
		i++;
	}
	return ((int)count);
}
