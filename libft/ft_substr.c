/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 18:16:51 by jose-an2          #+#    #+#             */
/*   Updated: 2025/09/30 20:16:26 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	l;

	l = 0;
	if (start >= (unsigned int)ft_strlen((char *)s))
		return (ft_strdup(""));
	if (len > (unsigned int)ft_strlen((char *)s + start))
		len = (unsigned int)ft_strlen((char *)s + start);
	dest = (char *)malloc(len + 1);
	if (!dest)
		return (NULL);
	while (l < len && s[start + l] != '\0')
	{
		dest[l] = s[start + l];
		l++;
	}
	dest[l] = '\0';
	return (dest);
}
