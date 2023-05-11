/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maorvana <maorvana@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:02:05 by maorvana          #+#    #+#             */
/*   Updated: 2023/05/11 17:46:13 by maorvana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	ch;
	size_t			i;

	tmp = (unsigned char *)s;
	ch = c;
	i = 0;
	while (i < n)
	{
		if (*tmp == ch)
			return (tmp);
		else
			tmp++;
		i++;
	}
	return (NULL);
}
