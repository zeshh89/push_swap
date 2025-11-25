/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 15:44:55 by jose-an2          #+#    #+#             */
/*   Updated: 2025/09/30 19:29:28 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;
	unsigned char		targ;
	size_t				i;

	i = 0;
	src = (const unsigned char *)s;
	targ = (unsigned char)c;
	while (i < n)
	{
		if (src[i] == targ)
			return ((void *)src + i);
		i++;
	}
	return (NULL);
}
