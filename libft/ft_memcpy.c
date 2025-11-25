/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 22:21:24 by jose-an2          #+#    #+#             */
/*   Updated: 2025/09/30 19:58:24 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				l;
	unsigned char		*d;
	const unsigned char	*s;

	l = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (l < n)
	{
		d[l] = s[l];
		l++;
	}
	return (dest);
}
