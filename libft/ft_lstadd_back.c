/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 22:52:26 by jose-an2          #+#    #+#             */
/*   Updated: 2025/11/25 23:33:36 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*mylist;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	mylist = ft_lstlast(*lst);
	mylist->next = new;
}
