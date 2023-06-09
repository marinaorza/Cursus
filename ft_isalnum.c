/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maorvana <maorvana@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:09:13 by maorvana          #+#    #+#             */
/*   Updated: 2023/05/08 16:53:00 by maorvana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if (!(c >= 48 && c <= 57) && !(c >= 65 && c <= 90)
		&& !(c >= 97 && c <= 122))
		return (0);
	else
		return (1);
}	
