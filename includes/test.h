#ifndef TEST_H
# define TEST_H

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <stdio.h> 
#include <limits.h> 

int	ft_printf(char *format, ...);

void	asserts(char *s, char *s2);
void	assertC(char *s, wchar_t s2);
void	assertc(char *s, char s2);
void	assertI(char *s, long long s2);
void	assertS(char *s, wchar_t *s2);
void	assertP(char *s, void *s2);

void	test_3(void);
void	test(void);
void	test_1(void);
void	test_2(void);

#endif
