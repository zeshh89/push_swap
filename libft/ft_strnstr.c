/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 16:17:55 by jose-an2          #+#    #+#             */
/*   Updated: 2025/09/30 19:37:48 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	p;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (i < n && big[i] != '\0')
	{
		p = 0;
		while (big[i + p] == little[p] && (i + p) < n && little[p] != '\0')
			p++;
		if (little[p] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
