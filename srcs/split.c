#include "ft_printf.h"

const t_function_type func_tab[] = {
	{'s', s_type},
	{'d', d_type}
};

int	split(va_list ap, const char **format)
{
	int i;
	int	len;
	char *s;

	i = 0;
	len = 0;
	(*format)++;
	while (i < 2)
	{
		if (*format[0] == func_tab[i].type)
		{
			s = func_tab[i].t_function_type(ap, *format);
		}
		i++;
	}
	len = write(1, s, ft_strlen(s));

	return (len);
}
