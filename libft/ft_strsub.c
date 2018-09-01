/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmiantud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 17:39:04 by zmiantud          #+#    #+#             */
/*   Updated: 2018/08/31 12:40:11 by zmiantud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = -1;
	if (s)
	{
		sub = (char*)malloc(sizeof(char) * (len + 1));
		if (sub)
		{
			while (++i < len)
				sub[i] = s[start++];
			sub[i] = '\0';
			return (sub);
		}
	}
	return (NULL);
}
