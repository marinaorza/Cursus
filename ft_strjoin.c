/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maorvana <maorvana@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:11:27 by maorvana          #+#    #+#             */
/*   Updated: 2023/05/31 16:04:38 by maorvana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		s1_len;
	int		s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	newstr = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, s1, s1_len + 1);
	ft_strlcpy((newstr + s1_len), s2, s2_len + 1);
	return (newstr);
}
