
#include "ft_printf.h"

char	*s_type(va_list ap, const char *format)
{
	char  *s;
	
	s = va_arg(ap, char *);
	return (s);
}

char	*d_type(va_list ap, const char *format)
{
	return (0);
}
