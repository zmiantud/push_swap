/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_and_apply_oper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmiantud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 08:50:05 by zmiantud          #+#    #+#             */
/*   Updated: 2018/09/01 09:28:37 by zmiantud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker/checker.h"

static void		put_error(t_arr *stk_a, t_arr *stk_b, char **argv, char *line)
{
	ft_putstr("\033[33mError\n\033[0m");
	ft_free(stk_a, stk_b);
	if (stk_a->k == 1)
		ft_free_argv(argv);
	free(line);
	exit(0);
}

static void		apply(t_arr *stack_a, t_arr *stack_b, char *line, char **av)
{
	if (ft_strequ(line, "sa"))
		swap_a(stack_a);
	else if (ft_strequ(line, "sb"))
		swap_b(stack_b);
	else if (ft_strequ(line, "ss"))
		swap_both(stack_a, stack_b);
	else if (ft_strequ(line, "ra"))
		rotate_a(stack_a);
	else if (ft_strequ(line, "rb"))
		rotate_b(stack_b);
	else if (ft_strequ(line, "rr"))
		rotate_both(stack_a, stack_b);
	else if (ft_strequ(line, "rra"))
		rev_rot_a(stack_a);
	else if (ft_strequ(line, "rrb"))
		rev_rot_b(stack_b);
	else if (ft_strequ(line, "rrr"))
		rev_rot_both(stack_a, stack_b);
	else if (ft_strequ(line, "pa"))
		push_into_a(stack_a, stack_b);
	else if (ft_strequ(line, "pb"))
		push_into_b(stack_a, stack_b);
	else
		put_error(stack_a, stack_b, av, line);
}

int				get_and_apply_oper(t_arr *stack_a, t_arr *stack_b, char **av)
{
	char	*line;

	line = NULL;
	while ((get_next_line(0, &line)) == 1)
	{
		apply(stack_a, stack_b, line, av);
		free(line);
	}
	return (1);
}
