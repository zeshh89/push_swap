/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 20:32:01 by jose-an2          #+#    #+#             */
/*   Updated: 2025/11/30 20:33:04 by jose-an2         ###   ########.fr       */
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
void	rotate(int *array, int size, char *direction, char *list);
int		ft_atol(const char *str, t_stacks *s);
void	index_nums(t_stacks *s);
void	push(char *str, t_stacks *s);
void	swap(char *str, int *array, int size);
void	sort_three(t_stacks *s);
void	radix_sort(t_stacks *s);
void	radix_sort_b(t_stacks *s, int b_size, int bit_size, int j);
void	sort_fourfive(t_stacks *s);

#endif
