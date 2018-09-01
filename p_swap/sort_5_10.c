/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_10.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmiantud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 16:53:14 by zmiantud          #+#    #+#             */
/*   Updated: 2018/08/31 17:04:43 by zmiantud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap/p_swap.h"

int		deal_with_3(t_arr *stack_a, t_arr *stack_b)
{
	sort_3(stack_a);
	while (stack_a->top != stack_a->max_size)
		push_into_a(stack_a, stack_b);
	return (1);
}

void	send_lowest_to_top(t_arr *stack_a)
{
	int		low_index;
	int		mid_index;

	low_index = find_lowest_index(stack_a);
	mid_index = ft_index_mid_num(stack_a);
	if (low_index <= mid_index)
		rotate_a(stack_a);
	else if ((is_top_odd(stack_a) && (low_index == stack_a->top / 2)))
		rotate_a(stack_a);
	else if (low_index > mid_index)
		rev_rot_a(stack_a);
}

void	sort_5_10(t_arr *stack_a, t_arr *stack_b)
{
	int		k;

	k = 1;
	while (!(is_sorted(stack_a)) && k)
	{
		if (stack_a->top == 3)
			if (deal_with_3(stack_a, stack_b))
				break ;
		if (find_lowest(stack_a) == stack_a->items[0])
			push_into_b(stack_a, stack_b);
		while (find_lowest(stack_a) != stack_a->items[0])
			send_lowest_to_top(stack_a);
		if (!(is_sorted(stack_a)))
			push_into_b(stack_a, stack_b);
		else
			while (stack_a->top != stack_a->max_size)
				push_into_a(stack_a, stack_b);
		if ((stack_a->top == stack_a->max_size) && is_sorted(stack_a))
			k = 0;
	}
}
