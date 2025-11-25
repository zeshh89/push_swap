/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 17:27:09 by jose-an2          #+#    #+#             */
/*   Updated: 2025/09/30 22:06:12 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			total;
	unsigned char	*ptr;

	if (!count || !size)
	{
		ptr = malloc(1);
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	total = count * size;
	if ((total / size) != count)
		return (NULL);
	ptr = (unsigned char *)malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero((void *)ptr, total);
	return ((void *)ptr);
}
