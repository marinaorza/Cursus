/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maorvana <maorvana@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:25:08 by maorvana          #+#    #+#             */
/*   Updated: 2023/05/08 16:55:15 by maorvana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}
