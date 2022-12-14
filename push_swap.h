/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 08:40:57 by mbazirea          #+#    #+#             */
/*   Updated: 2022/12/14 12:29:25 by mbazirea         ###   ########.fr       */
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
void	intput_in_a(t_stack	*stack, int argc, char *argv[]);
int		have_space(char *s);
int		put_number_in_a(t_stack *stack, char *argv, int *a_index);
int		put_string_number_in_a(t_stack *stack, char *argv, int *a_index);
int		is_int(char *argv);

#endif
