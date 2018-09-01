/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmiantud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 08:35:52 by zmiantud          #+#    #+#             */
/*   Updated: 2018/09/01 09:31:08 by zmiantud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker/checker.h"

static void		init_stack(t_arr *stack_a, t_arr *stack_b)
{
	stack_a->top = 0;
	stack_a->max_size = 0;
	stack_b->top = 0;
	stack_b->max_size = 0;
	stack_a->k = 0;
	stack_b->k = 0;
}

void			check_errors(char **argv, t_arr *stck_a, t_arr *stck_b)
{
	int		i;

	i = 1;
	while (argv[i])
	{
		if (is_int(argv[i]))
			i++;
		else
		{
			ft_putstr("\033[33mError\n\033[0m");
			if (stck_a->k == 1)
				ft_free_argv(argv);
			exit(0);
		}
	}
}

int				main(int argc, char **argv)
{
	t_arr	stack_a;
	t_arr	stack_b;

	if (argc > 1)
	{
		init_stack(&stack_a, &stack_b);
		argv = make_args(&argc, argv, &stack_a);
		check_errors(argv, &stack_a, &stack_b);
		popul_stack(&stack_a, &stack_b, argc, argv);
		if (get_and_apply_oper(&stack_a, &stack_b, argv) \
				&& is_sorted(&stack_a) && stack_b.top == 0)
			ft_putstr("\033[32mOK\n\033[0m");
		else
			ft_putstr("\033[31mKO\n\033[0m");
		ft_free(&stack_a, &stack_b);
	}
	if (stack_a.k == 1)
		ft_free_argv(argv);
	return (0);
}
