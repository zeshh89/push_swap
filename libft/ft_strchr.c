/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 21:51:31 by jose-an2          #+#    #+#             */
/*   Updated: 2025/09/30 19:53:41 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;
	size_t	l;

	a = (char)c;
	l = 0;
	while (s[l] != '\0')
	{
		if (s[l] == a)
			return ((char *)(s + l));
		l++;
	}
	if (a == '\0')
		return ((char *)(s + l));
	return (NULL);
}
