/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maorvana <maorvana@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:47:19 by maorvana          #+#    #+#             */
/*   Updated: 2023/05/08 16:54:17 by maorvana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	a;

	a = 0;
	len = 0;
	while (src[len])
	{
		len++;
	}
	if (dstsize < 1)
		return (len);
	while (src[a] && a < dstsize - 1)
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = '\0';
	return (len);
}
