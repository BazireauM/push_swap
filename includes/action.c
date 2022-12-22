/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 20:17:55 by mbazirea          #+#    #+#             */
/*   Updated: 2022/12/22 20:48:32 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack *stack)
{
	int tmp;

	if (stack->lena >= 2)
	{
		tmp = stack->a[stack->lena];
		stack->a[stack->lena] = stack->a[stack->lena - 1];
		stack->a[stack->lena - 1] = tmp;
	}
}

void	sb(t_stack *stack)
{
	int	tmp;

	if (stack->lena >= 2)
	{
		tmp = stack->a[stack->lena];
		stack->a[stack->lena] = stack->a[stack->lena - 1];
		stack->a[stack->lena - 1] = tmp;
	}
}

void	ss(t_stack *stack)
{
	sa(stack);
	sb(stack);
}

void	pa(t_stack *stack)
{
	if (stack->lenb >= 1)
	{
		stack->a[stack->lena + 1] = stack->b[stack->lenb];
		stack->lena += 1;
		stack->lenb -= 1;
	}
}

void	pb(t_stack *stack)
{
	if (stack->lena >= 1)
	{
		stack->b[stack->lenb + 1] = stack->a[stack->lena];
		stack->lenb += 1;
		stack->lena -= 1;
	}
}
