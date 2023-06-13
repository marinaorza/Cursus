/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maorvana <maorvana@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:39:59 by maorvana          #+#    #+#             */
/*   Updated: 2023/05/31 15:25:24 by maorvana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char const c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static size_t	starting_p(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while (is_in_set(s1[start], set))
		start++;
	return (start);
}

static size_t	ending_p(char const *s1, char const *set)
{
	size_t	end;

	end = ft_strlen(s1) - 1;
	while (is_in_set(s1[end], set))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;
	char	*trimmed;

	start = starting_p(s1, set);
	end = ending_p(s1, set);
	if (!s1 || !set)
		return (NULL);
	if (start == ft_strlen(s1))
	{
		str = malloc(sizeof(char));
		if (!str)
			return (NULL);
		ft_strlcpy(str, "", 1);
		return (str);
	}	
	trimmed = malloc(sizeof(char) * (end - start + 2));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, (s1 + start), (end - start + 2));
	return (trimmed);
}
