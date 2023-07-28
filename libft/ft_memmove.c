/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbasile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:00:53 by mbasile           #+#    #+#             */
/*   Updated: 2023/01/18 09:57:44 by mbasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*d;
	const char		*s;
	size_t			i;

	i = 0;
	d = (char *) dst;
	s = (char *) src;
	if (len == 0 || (d == NULL && s == NULL))
		return (dst);
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		while (i < len)
		{
			((char *) dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}
