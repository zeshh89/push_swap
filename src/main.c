/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-an2 <jose-an2@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 18:34:33 by jose-an2          #+#    #+#             */
/*   Updated: 2025/11/28 00:17:51 by jose-an2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	check_args(int argc, char **argv)
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
			ft_exit_free(NULL, "Invalid Argument\n");
		while (argv[i][j] != '\0')
		{
			if (!ft_isdigit(argv[i][j]) && argv[i][j] != ' '
				&& argv[i][j] != '-' && argv[i][j] != '+')
				ft_exit_free(NULL, "Invalid Argument\n");
			if ((argv[i][j] == '-' || argv[i][j] == '+') &&
				(argv[i][j + 1] == ' ' || argv[i][j + 1] == '\0' ||
				argv[i][j + 1] == '+' || argv[i][j + 1] == '-'))
				ft_exit_free(NULL, "Invalid Argument\n");
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

#include <stdio.h>

static void print_stack_a(t_stacks *s)//testeando el parseo
{
    int i;

    if (!s || !s->a)
    {
        printf("Stack A está vacío o estructura nula.\n");
        return;
    }

    printf("Stack A (size = %d): ", s->a_size);
    for (i = 0; i < s->a_size; i++)
    {
        printf("%d", s->a[i]);
        if (i < s->a_size - 1)
            printf(" "); 
    }
    printf("\n");
}

int	main(int argc, char **argv)
{
	t_stacks	*s;

	check_args(argc, argv);
	s = malloc(sizeof * s);
	if (s == NULL)
		exit(1);
	combine_args(argc, argv, s);
	create_stacks(argc, argv, s);
	fill_numbers(s);
	sorted_duplicate_check(s, 0);
	print_stack_a(s->a);
	ft_exit_free(s,"");
	return (0);
}
