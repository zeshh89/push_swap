/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 18:34:48 by jose-an2          #+#    #+#             */
/*   Updated: 2025/11/30 22:56:31 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorted_duplicate_check(t_stacks *s, int i)
{
	int	j;

	j = 0;
	if (i == 0)
	{
		while (i < s->a_size)
		{
			j = i + 1;
			while (j < s->a_size)
			{
				if (s->a[i] == s->a[j])
					ft_exit_free(s, "Error\n");
				j++;
			}
			i++;
		}
	}
	if (is_sort(s))
		ft_exit_free(s, NULL);
}

void	fill_numbers(t_stacks *s)
{
	char	**tmp;
	int		i;
	int		node;

	node = 0;
	tmp = ft_split(s->combine_args, ' ');
	i = 0;
	while (tmp[i] != NULL && tmp[i][0] != '\0')
	{
		s->a[node++] = ft_atol(tmp[i++], s);
		free(tmp[i - 1]);
	}
	free(tmp);
}

void	create_stacks(t_stacks *s)
{
	s->a_size = count_w(s->combine_args, ' ');
	s->b_size = 0;
	s->a = malloc (s ->a_size * sizeof(*s->a));
	if (!s->a)
		ft_exit_free(s, "Error\n");
	s->b = malloc (s ->a_size * sizeof(*s->b));
	if (!s->b)
		ft_exit_free(s, "Error\n");
}

int	ft_atol(const char *str, t_stacks *s)
{
	int			i;
	long		sign;
	long long	res;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if ((str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			ft_exit_free(s, "Error\n");
		res = res * 10 + (str[i++] - '0');
		if (res > 2147483647 || (res * sign) < -2147483648)
			ft_exit_free(s, "Error\n");
	}
	return ((int)(res * sign));
}

void	index_nums(t_stacks *s)
{
	int		i;
	int		j;
	int		minor;
	int		*tmp_a;

	tmp_a = malloc(s->a_size * sizeof * tmp_a);
	if (tmp_a == NULL)
		ft_exit_free(s, "Error\n");
	i = -1;
	while (++i < s->a_size)
	{
		minor = 0;
		j = -1;
		while (++j < s->a_size)
			if (s->a[i] > s->a[j])
				minor++;
		tmp_a[i] = minor;
	}
	i = s->a_size;
	while (i--)
		s->a[i] = tmp_a[i];
	free(tmp_a);
}
