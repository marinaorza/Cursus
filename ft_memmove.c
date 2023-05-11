/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maorvana <maorvana@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:30:48 by maorvana          #+#    #+#             */
/*   Updated: 2023/05/08 17:43:14 by maorvana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest1;
	const char	*src1;
	char		*temp;
	size_t		i;

	dest1 = dst;
	src1 = src;
	temp = (char *)malloc(sizeof(char)* len);
	i = 0;
	while (i < len)
	{	
		temp[i] = src1[i];
		dest1[i] = temp[i];
		i++;
	}
	return (dst);	
}

int main()
{
    char str[100] = "Learningisfun";
	char str1[100] = "LEARNINGISFUN";

 	char	*first;
	char	*second;
	size_t	len;
    first = str;
    second = str1;
	len = ft_strlen(first);
    printf("Original string :%s\n ", str);

    // when overlap happens then it just ignore it
    memcpy(first + 8, first, 13);
    printf("memcpy overlap : %s\n ", str);

    // when overlap it start from first position
    memmove(second + 8, first, 13);
    printf("memmove overlap : %s\n ", str1);
	printf("ft_memmove overlap: %s\n", ft_memmove(second, first, len));

    return 0;
}
