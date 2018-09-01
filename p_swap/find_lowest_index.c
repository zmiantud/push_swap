/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_lowest_index.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmiantud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 17:14:08 by zmiantud          #+#    #+#             */
/*   Updated: 2018/08/31 17:07:27 by zmiantud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap/p_swap.h"

int		find_lowest_index(t_arr *stack)
{
	int		i;
	int		n;
	int		low;

	i = 0;
	low = stack->items[0];
	n = 0;
	while (i < stack->top - 1)
	{
		if (low > stack->items[i + 1])
		{
			low = stack->items[i + 1];
			n = i + 1;
		}
		i++;
	}
	return (n);
}
