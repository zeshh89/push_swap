/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 22:45:53 by jose-an2          #+#    #+#             */
/*   Updated: 2025/11/28 00:09:14 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_stacks
{
	int		*a;
	int		*b;
	int		a_size;
	int		b_size;
	char	*combine_args;
}			t_stacks;

void	check_args(int argc, char **argv);
void	ft_exit_free(t_stacks *s, char *msg);
void	sorted_duplicate_check(t_stacks *s, int i);
void	create_stacks(t_stacks *s);
void	combine_args(int argc, char **argv, t_stacks *s);
int		is_sort(t_stacks *s);
void	fill_numbers(t_stacks *s);

#endif
