/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maorvana <maorvana@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:05:15 by maorvana          #+#    #+#             */
/*   Updated: 2023/05/11 15:06:56 by maorvana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dest1;
	const char	*src1;

	dest1 = dst;
	src1 = src;
	i = 0;
	if (!dest1 && !src1)
		return (0);
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	if (i == n)
	{	
		dest1[i] = '\0';
	}	
	return (dst);
}
