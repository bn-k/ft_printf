#include "ft_printf.h"

const t_function_type func_tab[] = {
	{'s', s_type},
	{'d', d_type}
};

int	formating(va_list ap, const char **format)
{
	int i;
	int	count;
	char *s;

	i = 0;
	count = 0;
	(*format)++;
	while (i < 2)
	{
		if (*format[0] == func_tab[i].type)
		{
			s = func_tab[i].t_function_type(ap, *format);
		}
		i++;
	}
	count = write(1, s, ft_strlen(s));

	return (count);
}
