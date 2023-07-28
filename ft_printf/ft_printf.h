/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbasile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:24:30 by mbasile           #+#    #+#             */
/*   Updated: 2023/02/28 11:32:29 by mbasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

void			ft_putchar_length(char c, int *count);
void			ft_string(char *string, int *count);
void			ft_number(int number, int *length);
void			ft_putnbr(int nb);
void			ft_hexadecimal(unsigned int x, int *count, char x_or_x);
void			ft_unsigned_int(unsigned int u, int *count);
void			ft_pointer(size_t pointer, int *count);
int				ft_printf(const char *string, ...);

#endif
