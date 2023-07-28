/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbasile <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:49:58 by mbasile           #+#    #+#             */
/*   Updated: 2023/01/24 12:20:09 by mbasile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_con(char c, char const *set)
{
	unsigned int	j;

	j = 0;
	while (set[j] != '\0')
	{
		if (c == (char) set[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	k;
	unsigned int	con;
	char			*str;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	if (s1[i] != '\0')
	{
		while (s1[i] != '\0' && (ft_con(s1[i], set) == 1))
			i++;
		k = ((unsigned int) ft_strlen(s1)) - 1;
		while ((ft_con(s1[k], set) == 1) && k > i)
			k--;
		con = (k - i) + 1;
	}
	else
		con = 1;
	str = ft_substr(s1, i, con);
	if (!str)
		return (NULL);
	return (str);
}
