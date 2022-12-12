/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parssing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 09:31:49 by mbazirea          #+#    #+#             */
/*   Updated: 2022/12/12 10:52:51 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*parssing(int argc, char *argv[])
{
	t_stack	*stack;
	//test input valide
	if (test_input_valid(argc, argv) == 1)
	{
		printf("invalid input\n");
		return (0);
	}
	//count nb int
	stack = malloc(sizeof(t_stack));
	stack->len = count_nb_int(argc, argv);
	//malloc a et b
	stack->a = malloc(sizeof(int) * stack->len);
	stack->b = malloc(sizeof(int) * stack->len);
	//mettre les input dans a
	//test doublon
	return (stack);
}

int	count_nb_int(int argc, char *argv[])
{
	t_norm	a;

	a.nb_int = 0;
	a.i = 1;
	while (a.i < argc)
	{
		a.b = 0;
		while (argv[a.i][a.b] && argv[a.i][a.b] == ' ')
			a.b++;
		while (argv[a.i][a.b])
		{
			if (argv[a.i][a.b] == ' ')
			{
				while (argv[a.i][a.b] && argv[a.i][a.b] == ' ')
					a.b++;
				a.nb_int++;
			}
			else
				a.b++;
		}
		if (argv[a.i][a.b - 1] && argv[a.i][a.b - 1] != ' ')
			a.nb_int++;
		a.i++;
	}
	return (a.nb_int);
}

int	test_input_valid(int argc, char *argv[])
{
	int	i;
	int	b;

	if (argc < 2)
		return (1);
	i = 1;
	while (i < argc)
	{
		b = 0;
		while (argv[i][b])
		{
			if (ft_isdigit(argv[i][b]) == 0 && argv[i][b] != ' ')
				return (1);
			b++;
		}
		i++;
	}
	return (0);
}
