/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maorvana <maorvana@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:23:28 by maorvana          #+#    #+#             */
/*   Updated: 2023/06/08 12:06:33 by maorvana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_del_len(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			++count;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**subs;
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	i = 0;
	subs = malloc(sizeof(char *) * (ft_del_len(s, c) + 1));
	if (!subs)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			subs[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	subs[i] = 0;
	return (subs);
}
