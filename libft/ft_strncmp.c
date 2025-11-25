/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 17:34:13 by jose-an2          #+#    #+#             */
/*   Updated: 2025/09/30 21:47:44 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	l;

	l = 0;
	while (l < n && (s1[l] != '\0' || s2[l] != '\0'))
	{
		if ((unsigned char)s1[l] != (unsigned char)s2[l])
			return ((unsigned char)s1[l] - (unsigned char)s2[l]);
		l++;
	}
	return (0);
}
