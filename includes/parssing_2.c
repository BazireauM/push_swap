/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parssing_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:24:48 by mbazirea          #+#    #+#             */
/*   Updated: 2022/12/14 12:38:48 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	have_space(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}

int	put_number_in_a(t_stack *stack, char *argv, int *a_index)
{
	//test si argv est un int
	/*
	if (is_int(argv) == 1)
	{
		free(stack->a);
		free(stack->b);
		free(stack);
		return (1);
	}
	*/
	//put in a
	stack->a[*a_index] = ft_atoi(argv);
	return (0);
}

int	put_string_number_in_a(t_stack stack, char *argv, int *a_index)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] = ' ' && argv[i - 1] && ft_isdigit(argv[i - 1] == 1))
		{
		}
		i++;
	}
}
