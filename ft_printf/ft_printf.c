/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbasile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:55:17 by mbasile           #+#    #+#             */
/*   Updated: 2023/02/28 11:24:41 by mbasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printf_check( char s, va_list *args, int *count, int *i)
{
	if (s == 's')
		ft_string(va_arg(*args, char *), count);
	else if (s == 'd' || s == 'i')
		ft_number(va_arg(*args, int), count);
	else if (s == 'u')
		ft_unsigned_int(va_arg(*args, unsigned int), count);
	else if (s == 'x')
		ft_hexadecimal(va_arg(*args, unsigned int), count, 'x');
	else if (s == 'X')
		ft_hexadecimal(va_arg(*args, unsigned int), count, 'X');
	else if (s == 'p')
		ft_pointer(va_arg(*args, size_t), count);
	else if (s == 'c')
		ft_putchar_length(va_arg(*args, int), count);
	else if (s == '%')
		ft_putchar_length('%', count);
	else
		(*i)--;
}

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		count;
	int		i;

	i = 0;
	count = 0;
	va_start(args, string);
	while (string[i] != '\0')
	{
		if (string[i] == '%')
		{
			i++;
			ft_printf_check(string[i], &args, &count, &i);
			i++;
		}
		else
		{
			ft_putchar_length((char)string[i], &count);
			i++;
		}
	}
	va_end(args);
	return (count);
}
