/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 18:20:47 by jose-an2          #+#    #+#             */
/*   Updated: 2025/09/30 22:17:24 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	l;
	size_t	src_len;

	src_len = ft_strlen(src);
	l = 0;
	if (n == 0)
		return (src_len);
	while (l < n - 1 && src[l] != '\0')
	{
		dst[l] = src[l];
		l++;
	}
	dst[l] = '\0';
	return (src_len);
}
