/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 20:48:44 by mbazirea          #+#    #+#             */
/*   Updated: 2022/12/23 12:10:53 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra1(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->lena >= 2)
	{
		i = stack->lena - 1;
		tmp = stack->a[stack->lena];
		stack->a[stack->lena] = stack->a[i];
		while (i > 1)
		{
			stack->a[i] = stack->a[i - 1];
			i--;
		}
		stack->a[i] = tmp;
	}
}

void	rb1(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->lenb >= 2)
	{
		i = stack->lenb - 1;
		tmp = stack->b[stack->lenb];
		stack->b[stack->lenb] = stack->b[i];
		while (i > 1)
		{
			stack->b[i] = stack->b[i - 1];
			i--;
		}
		stack->b[i] = tmp;
	}
}

void	rr(t_stack *stack)
{
	ra1(stack);
	rb1(stack);
	write(1, "rr\n", 3);
}

void	rra1(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->lena >= 2)
	{
		tmp = stack->a[1];
		stack->a[1] = stack->a[2];
		i = 2;
		while (i < stack->lena)
		{
			stack->a[i] = stack->a[i + 1];
			i++;
		}
		stack->a[i] = tmp;
	}
}

void	rrb1(t_stack *stack)
{
	int	tmp;
	int	i;

	if (stack->lenb >= 2)
	{
		tmp = stack->b[1];
		stack->b[1] = stack->b[2];
		i = 2;
		while (i < stack->lenb)
		{
			stack->b[i] = stack->b[i + 1];
			i++;
		}
		stack->b[i] = tmp;
	}
}
