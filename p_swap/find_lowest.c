/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_lowest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmiantud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 09:45:16 by zmiantud          #+#    #+#             */
/*   Updated: 2018/08/31 17:00:48 by zmiantud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap/p_swap.h"

int		find_lowest(t_arr *stack)
{
	int		i;
	int		low;

	i = 0;
	low = stack->items[0];
	while (i < stack->top - 1)
	{
		if (low > stack->items[i + 1])
			low = stack->items[i + 1];
		i++;
	}
	return (low);
}
