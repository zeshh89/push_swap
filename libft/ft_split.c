/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 21:04:51 by jose-an2          #+#    #+#             */
/*   Updated: 2025/11/27 23:41:16 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_w(const char *s, char sep)
{
	int		count;
	int		word;
	size_t	i;

	i = 0;
	word = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != sep && word == 0)
		{
			word = 1;
			count++;
		}
		else if (s[i] == sep)
			word = 0;
		i++;
	}
	return (count);
}

static char	*dup_word(const char *start, int len)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_all(char **arr, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static int	fill_result(char **array, char const *s, char c, size_t word_count)
{
	size_t	i;
	size_t	word_l;

	i = 0;
	while (i < word_count)
	{
		while (*s == c)
			s++;
		word_l = 0;
		while (s[word_l] && s[word_l] != c)
			word_l++;
		array[i] = dup_word(s, word_l);
		if (!array[i])
		{
			free_all(array, i);
			return (0);
		}
		s += word_l;
		i++;
	}
	array[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = count_w(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	if (!fill_result(result, s, c, word_count))
	{
		free(result);
		return (NULL);
	}
	return (result);
}
