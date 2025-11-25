/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 20:02:00 by jose-an2          #+#    #+#             */
/*   Updated: 2025/09/30 19:32:55 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			l;
	unsigned char	*ptr;
	unsigned char	value;

	l = 0;
	ptr = (unsigned char *)s;
	value = (unsigned char)c;
	while (l < n)
	{
		ptr[l] = value;
		l++;
	}
	return (ptr);
}
