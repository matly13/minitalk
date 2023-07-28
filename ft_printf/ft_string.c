/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbasile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:42:35 by mbasile           #+#    #+#             */
/*   Updated: 2023/02/24 10:49:34 by mbasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_length(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

void	ft_string(char *string, int *count)
{
	size_t	i;

	i = 0;
	if (!string)
	{
		write(1, "(null)", 6);
		(*count) += 6;
		return ;
	}
	while (string[i] != '\0')
	{
		ft_putchar_length(string[i], count);
		i++;
	}
}
