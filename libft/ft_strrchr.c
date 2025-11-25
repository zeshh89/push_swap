/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 22:09:52 by jose-an2          #+#    #+#             */
/*   Updated: 2025/09/30 19:38:13 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	a;
	size_t	l;
	char	*last;

	a = (char)c;
	l = 0;
	last = NULL;
	while (s[l] != '\0')
	{
		if (s[l] == a)
			last = (char *)(s + l);
		l++;
	}
	if (a == '\0')
		return ((char *)(s + l));
	return (last);
}
