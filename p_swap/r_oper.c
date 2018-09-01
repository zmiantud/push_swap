/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_oper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmiantud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 16:42:34 by zmiantud          #+#    #+#             */
/*   Updated: 2018/08/31 17:03:50 by zmiantud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap/p_swap.h"

static int		rotate(t_arr *struc)
{
	int			i;
	int			first_num_temp;
	int			j;

	i = struc->top;
	j = 0;
	if (struc->top > 1)
	{
		first_num_temp = struc->items[0];
		while (--i > 0)
		{
			struc->items[j] = struc->items[j + 1];
			j++;
		}
		struc->items[j] = first_num_temp;
		return (1);
	}
	return (0);
}

void			rotate_both(t_arr *struc_a, t_arr *struc_b)
{
	if (struc_a->top > 1 && struc_b->top > 1)
		if (rotate_a(struc_a) && rotate_b(struc_b))
			ft_putstr("rr\n");
}

int				rotate_a(t_arr *struc_a)
{
	if (!arr_is_empty(struc_a) && struc_a->top > 1 && rotate(struc_a))
	{
		ft_putstr("ra\n");
		return (1);
	}
	return (0);
}

int				rotate_b(t_arr *struc_b)
{
	if (!arr_is_empty(struc_b) && struc_b->top > 1 && rotate(struc_b))
	{
		ft_putstr("rb\n");
		return (1);
	}
	return (0);
}
