/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index_mid_num.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmiantud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 17:38:21 by zmiantud          #+#    #+#             */
/*   Updated: 2018/08/31 17:02:15 by zmiantud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap/p_swap.h"

int		ft_index_mid_num(t_arr *stack)
{
	int		i;
	int		mid;
	int		mid_num;
	int		mid_num_index;

	i = 0;
	mid = stack->top / 2;
	mid_num = stack->items[mid - 1];
	while (i < stack->top)
	{
		if (stack->items[i] == mid_num)
			mid_num_index = i;
		i++;
	}
	return (mid_num_index);
}
