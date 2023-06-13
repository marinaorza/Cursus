/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maorvana <maorvana@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:56:22 by maorvana          #+#    #+#             */
/*   Updated: 2023/06/08 15:02:00 by maorvana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*q;
	t_list	*novo;

	novo = 0;
	while (lst)
	{	
		q = ft_lstnew(f(lst->content));
		if (!q)
		{
			ft_lstclear(&novo, del);
			return (0);
		}
		ft_lstadd_back(&novo, q);
		lst = lst->next;
	}
	return (novo);
}	
