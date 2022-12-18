/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parssing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 09:31:49 by mbazirea          #+#    #+#             */
/*   Updated: 2022/12/18 13:56:57 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*parssing(int argc, char *argv[])
{
	t_stack	*stack;
	//test input valide
	if (test_input_valid(argc, argv) == 1)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	//count nb int
	stack = malloc(sizeof(t_stack));
	stack->len = count_nb_int(argc, argv);
	printf("len : %d\n", stack->len);
	//malloc a et b
	stack->a = malloc(sizeof(int) * stack->len);
	stack->b = malloc(sizeof(int) * stack->len);
	//mettre les input dans a
	input_in_a(stack, argc, argv);
	int i = stack->len;
	while (i > 0)
	{
		printf("test2 : %d\n", stack->a[i]);
		i--;
	}
	//test doublon
	return (stack);
}

void	input_in_a(t_stack *stack, int argc, char *argv[])
{
	int	i;
	int	a_index;

	i = 1;
	a_index = stack->len;
	while (i < argc)
	{
		if (put_string_number_in_a(stack, argv[i], &a_index) == 1)
			break;
		i++;
	}
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
			if (ft_isdigit(argv[i][b]) == 0 && argv[i][b] != '-'
				&& argv[i][b] != ' ')
				return (1);
			b++;
		}
		i++;
	}
	return (0);
}
