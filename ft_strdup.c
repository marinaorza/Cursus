/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maorvana <maorvana@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:35:08 by maorvana          #+#    #+#             */
/*   Updated: 2023/06/07 15:25:13 by maorvana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		s1_len;
	int		i;
	char	*buffer;

	s1_len = ft_strlen(s1);
	buffer = (char *)malloc(sizeof(char) * (s1_len + 1));
	if (!buffer)
		return (NULL);
	i = 0;
	while (i <= s1_len)
	{
		buffer[i] = s1[i];
		i++;
	}
	buffer[s1_len] = '\0';
	return (buffer);
}
