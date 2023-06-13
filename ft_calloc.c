/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maorvana <maorvana@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:54:35 by maorvana          #+#    #+#             */
/*   Updated: 2023/05/31 11:31:11 by maorvana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*mem;
	size_t	i;

	mem = malloc(count * size);
	if (mem == NULL)
		return (0);
	i = 0;
	while (i < count * size)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}	
