/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 23:23:07 by jose-an2          #+#    #+#             */
/*   Updated: 2025/11/25 23:23:30 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mylist;
	void	*tmp;

	if (!lst)
		return (NULL);
	mylist = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		if (!tmp)
		{
			ft_lstclear(&mylist, del);
			return (NULL);
		}
		ft_lstadd_back(&mylist, ft_lstnew(tmp));
		lst = lst->next;
	}
	return (mylist);
}
