/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 10:50:52 by mbazirea          #+#    #+#             */
/*   Updated: 2022/12/23 13:07:55 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack;
	int		i ;

	stack = parssing(argc, argv);
	if (!stack)
		return (1);
	pb(stack);
	pb(stack);
	pb(stack);
	pb(stack);
	printf("algo : %d\n", algo(stack));
	printf("a : \n\n");
	i = stack->lena;
	while (i > 0)
	{
		printf("%d\n", stack->a[i]);
		i--;
	}
	printf("\nb : \n\n");
	i = stack->lenb;
	while (i > 0)
	{
		printf("%d\n", stack->b[i]);
		i--;
	}
	return (0);
}
