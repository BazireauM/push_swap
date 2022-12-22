/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 08:40:57 by mbazirea          #+#    #+#             */
/*   Updated: 2022/12/22 21:51:33 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	lena;
	int	lenb;
	int	len;
}	t_stack;

typedef struct s_norm
{
	int	i;
	int	b;
	int	nb_int;
}	t_norm;

t_stack	*parssing(int argc, char *argv[]);
int		test_input_valid(int argc, char *argv[]);
int		count_nb_int(int argc, char *argv[]);
void	input_in_a(t_stack	*stack, int argc, char *argv[]);
int		have_space(char *s);
int		put_number_in_a(t_stack *stack, char *s, int *a_index);
int		put_string_number_in_a(t_stack *stack, char *s, int *a_index);
void	free_stack(t_stack *stack);
void	free_norm(char **test);
int		is_int(char *argv);
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack);
void	pa(t_stack *stack);
void	pb(t_stack *stack);
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack);

#endif
