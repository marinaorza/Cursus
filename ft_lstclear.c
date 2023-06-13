/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maorvana <maorvana@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:43:12 by maorvana          #+#    #+#             */
/*   Updated: 2023/06/13 13:59:10 by maorvana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*q;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		q = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = q;
	}
	q = NULL;
	*lst = q;
}
