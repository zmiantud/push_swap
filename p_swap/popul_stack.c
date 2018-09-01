/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   popul_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmiantud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 15:40:42 by zmiantud          #+#    #+#             */
/*   Updated: 2018/09/01 09:03:04 by zmiantud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap/p_swap.h"

void	popul_stack(t_arr *stack_a, t_arr *stack_b, int argc, char **argv)
{
	int		i;

	i = -1;
	stack_a->max_size = argc - 1;
	stack_b->max_size = argc;
	stack_a->items = (int*)malloc(sizeof(int) * argc - 1);
	stack_b->items = (int*)malloc(sizeof(int) * argc - 1);
	while (++i < argc - 1)
	{
		stack_a->items[i] = ft_atoi(argv[i + 1]);
		stack_a->top++;
	}
	if (is_duplicate(stack_a))
	{
		ft_putstr("\033[33mError\n\033[0m");
		ft_free(stack_a, stack_b);
		if (stack_a->k == 1)
			ft_free_argv(argv);
		exit(0);
	}
}
