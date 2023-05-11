/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maorvana <maorvana@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:47:36 by maorvana          #+#    #+#             */
/*   Updated: 2023/05/08 17:01:07 by maorvana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	sign;

	i = 0;
	nb = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\r' || str[i] == '\n'
		|| str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		if (str[i + 1] == '-' || str[i + 1] == '+' || str[i + 1] == ' ')
			return (0);
		i++;
	}	
	while (str[i] >= '0' && str[i] <= '9')
	{	
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}
