/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 18:34:48 by jose-an2          #+#    #+#             */
/*   Updated: 2025/11/25 22:45:22 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	if (is_array_sorted(s))
		ft_exit_free(s, NULL);
}


