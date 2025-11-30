/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 18:34:33 by jose-an2          #+#    #+#             */
/*   Updated: 2025/11/30 20:41:10 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_args(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc < 2)
		ft_exit_free(NULL, "");
	while (++i < argc)
	{
		j = 0;
		if (!argv[i][0] || (argv[i][0] && argv[i][0] == ' '))
			ft_exit_free(NULL, "Error\n");
		while (argv[i][j] != '\0')
		{
			if (!ft_isdigit(argv[i][j]) && argv[i][j] != ' '
				&& argv[i][j] != '-' && argv[i][j] != '+')
				ft_exit_free(NULL, "Error\n");
			if ((argv[i][j] == '-' || argv[i][j] == '+') &&
				(argv[i][j + 1] == ' ' || argv[i][j + 1] == '\0' ||
				argv[i][j + 1] == '+' || argv[i][j + 1] == '-'))
				ft_exit_free(NULL, "Error\n");
			j++;
		}
	}
}

void	ft_exit_free(t_stacks *s, char *msg)
{
	if (msg)
		write(2, msg, ft_strlen(msg));
	if (s != NULL)
	{
		if (s->a != NULL)
			free(s->a);
		if (s->b != NULL)
			free(s->b);
		if (s->combine_args != NULL)
			free(s->combine_args);
		if (s != NULL)
			free(s);
	}
	exit(1);
}

void	combine_args(int argc, char **argv, t_stacks *s)
{
	char	*tmp;
	char	*tmp2;
	int		i;

	i = 0;
	tmp2 = ft_strdup("");
	while (++i < argc && argv[i] != NULL)
	{
		tmp = ft_strjoin(tmp2, argv[i]);
		if (tmp2)
			free(tmp2);
		if (i != argc - 1)
		{
			tmp2 = ft_strjoin(tmp, " ");
			if (tmp)
				free(tmp);
			tmp = tmp2;
		}
	}
	s->combine_args = ft_strdup(tmp);
	if (s->combine_args == NULL)
		ft_exit_free(s, "Error\n");
	if (tmp)
		free(tmp);
}

int	main(int argc, char **argv)
{
	t_stacks	*s;

	check_args(argc, argv);
	s = malloc(sizeof * s);
	if (s == NULL)
		exit(1);
	combine_args(argc, argv, s);
	create_stacks(s);
	fill_numbers(s);
	sorted_duplicate_check(s, 0);
	index_nums(s);
	if (s->a_size == 2 && s->a[0] > s->a[1])
		swap("sa", s->a, s->a_size);
	else if (s->a_size == 3)
		sort_three(s);
	else if (s->a_size >= 4 && s->a_size <= 5)
		sort_fourfive(s);
	else
		radix_sort(s);
	sorted_duplicate_check(s, 1);
	ft_exit_free(s, "Error\n");
	return (0);
}
