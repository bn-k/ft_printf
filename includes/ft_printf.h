#ifndef FT_PRINT_F
# define FT_PRINT_F
# include "../libft/includes/libft.h"
# include <stdarg.h>

// typedef

typedef struct s_function_type
{
	char 	type;
	char *(*t_function_type)(va_list, const char*);
} t_function_type;

typedef struct s_format
{
	int		d;
	char	s;
} t_format;

//test
void	test_1(void);
void	test_2(void);
void	test_3(char *s, char *s2);

// main
int	ft_printf(const char *format, ...);

// dispatch

int	split(va_list ap, const char **format);
char *s_type(va_list ap, const char *format);
char *d_type(va_list ap, const char *format);

#endif
