#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <limits.h>

//FUNCTIONS
int	ft_printhex(unsigned int num, char flag);
int	ft_printnum(int num);
int	ft_printptr(unsigned long str);
int	ft_printchar(char c);
int	ft_printstr(char *str);
int	ft_printunsigned(unsigned int num);
int	ft_printf(const char *str, ...);

#endif
