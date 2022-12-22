/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parssing_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:24:48 by mbazirea          #+#    #+#             */
/*   Updated: 2022/12/22 20:11:19 by mbazirea         ###   ########.fr       */
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

int	put_number_in_a(t_stack *stack, char *nb, int *a_index)
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
	stack->a[*a_index] = ft_atoi(nb);
	*a_index -= 1;
	free(nb);
	return (0);
}

int	put_string_number_in_a(t_stack *stack, char *s, int *a_index)
{
	char	**test;
	int		i;

	i = 0;
	test = ft_split(s, ' ');
	if (!test)
	{
		free(stack->a);
		free(stack->b);
		free(stack);
		return (1);
	}
	while (test[i])
	{
		if (put_number_in_a(stack, test[i], a_index) == 1)
		{
			free(stack->a);
			free(stack->b);
			free(stack);
			i = 0;
			while (test[i])
			{
				free(test[i]);
				i++;
			}
			free(test[i]);
			free(test);
			return (1);
		}
		i++;
	}
	return (0);
}
