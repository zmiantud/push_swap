/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmiantud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 09:35:56 by zmiantud          #+#    #+#             */
/*   Updated: 2018/08/31 17:04:30 by zmiantud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap/p_swap.h"

void	sort_3(t_arr *stack_a)
{
	if (is_sorted(stack_a))
		return ;
	if (find_lowest(stack_a) == stack_a->items[0])
	{
		swap_a(stack_a);
		rotate_a(stack_a);
	}
	else if (find_lowest(stack_a) == stack_a->items[1])
	{
		if (stack_a->items[0] < stack_a->items[2])
			swap_a(stack_a);
		else
			rotate_a(stack_a);
	}
	else if (find_lowest(stack_a) == stack_a->items[2])
	{
		if (stack_a->items[0] < stack_a->items[1])
			rev_rot_a(stack_a);
		else
		{
			swap_a(stack_a);
			rev_rot_a(stack_a);
		}
	}
}
