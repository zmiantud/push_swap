/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_oper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmiantud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 16:18:39 by zmiantud          #+#    #+#             */
/*   Updated: 2018/08/31 17:04:15 by zmiantud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap/p_swap.h"

static int		swap(t_arr *struc)
{
	int		temp;

	if (!arr_is_empty(struc) && struc->top > 1)
	{
		temp = struc->items[0];
		struc->items[0] = struc->items[1];
		struc->items[1] = temp;
		return (1);
	}
	return (0);
}

void			swap_both(t_arr *struc_a, t_arr *struc_b)
{
	if (swap(struc_a) && swap(struc_b))
		ft_putstr("ss\n");
}

int				swap_a(t_arr *struc_a)
{
	if (swap(struc_a))
	{
		ft_putstr("sa\n");
		return (1);
	}
	return (0);
}

int				swap_b(t_arr *struc_b)
{
	if (swap(struc_b))
	{
		ft_putstr("sb\n");
		return (1);
	}
	return (0);
}
