/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbasile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:33:33 by mbasile           #+#    #+#             */
/*   Updated: 2023/02/24 13:59:12 by mbasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_number(int nb, int *count)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*count) += 11;
		return ;
	}
	if (nb < 0)
	{
		ft_putchar_length('-', count);
		ft_number(nb * -1, count);
	}
	else
	{
		if (nb > 9)
			ft_number(nb / 10, count);
		ft_putchar_length(nb % 10 + '0', count);
	}
}

void	ft_pointer(size_t pointer, int *count)
{
	char	string[25];
	int		i;
	char	*base_char;

	base_char = "0123456789abcdef";
	i = 0;
	write (1, "0x", 2);
	(*count) += 2;
	if (pointer == 0)
	{
		ft_putchar_length('0', count);
		return ;
	}
	while (pointer != 0)
	{
		string[i] = base_char[pointer % 16];
		pointer = pointer / 16;
		i++;
	}
	while (i--)
	{
		ft_putchar_length(string[i], count);
	}
}

void	ft_hexadecimal(unsigned int x, int *count, char x_or_x)
{
	char	string[25];
	char	*base_character;
	int		i;

	if (x_or_x == 'X')
		base_character = "0123456789ABCDEF";
	else
		base_character = "0123456789abcdef";
	i = 0;
	if (x == 0)
	{
		ft_putchar_length('0', count);
		return ;
	}
	while (x != 0)
	{
		string[i] = base_character [x % 16];
		x = x / 16;
		i++;
	}
	while (i--)
		ft_putchar_length(string[i], count);
}

void	ft_unsigned_int(unsigned int u, int *count)
{
	if (u >= 10)
		ft_unsigned_int(u / 10, count);
	ft_putchar_length(u % 10 + '0', count);
}
