/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pu_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmiantud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 17:35:06 by zmiantud          #+#    #+#             */
/*   Updated: 2018/09/01 09:03:17 by zmiantud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap/p_swap.h"

void	pu_swap(t_arr *stack_a, t_arr *stack_b)
{
	if (is_sorted(stack_a))
		return ;
	if (stack_a->max_size == 2)
		swap_a(stack_a);
	else if (stack_a->max_size == 3)
		sort_3(stack_a);
	else
		sort_5_10(stack_a, stack_b);
}
