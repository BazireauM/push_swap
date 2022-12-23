/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 21:40:06 by mbazirea          #+#    #+#             */
/*   Updated: 2022/12/23 13:07:53 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	algo(t_stack *stack)
{
	return (is_sort_ab(stack));
}

int	is_sort_a(t_stack *stack)
{
	int	i;

	i = stack->lena;
	while (i > 1)
	{
		if (stack->a[i] > stack->a[i - 1])
			return (0);
		i--;
	}
	return (1);
}

int	is_sort_b(t_stack *stack)
{
	int	i;

	i = stack->lenb;
	while (i > 1)
	{
		if (stack->b[i] < stack->b[i - 1])
			return (0);
		i--;
	}
	return (1);
}

int	is_sort_ab(t_stack *stack)
{
	if (is_sort_b(stack) == 0)
		return (0);
	if (is_sort_b(stack) == 0)
		return (0);
	return (1);
}
