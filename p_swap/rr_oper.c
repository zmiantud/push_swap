/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_oper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmiantud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 17:02:07 by zmiantud          #+#    #+#             */
/*   Updated: 2018/08/31 17:04:03 by zmiantud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap/p_swap.h"

static int		rev_rot(t_arr *struc)
{
	int			i;
	int			last_num_temp;
	int			j;

	i = struc->top;
	j = 0;
	if (struc->top > 1)
	{
		last_num_temp = struc->items[--i];
		while (i > 0)
		{
			struc->items[i] = struc->items[i - 1];
			i--;
		}
		struc->items[i] = last_num_temp;
		return (1);
	}
	return (0);
}

void			rev_rot_both(t_arr *struc_a, t_arr *struc_b)
{
	if (struc_a->top > 1 && struc_b->top > 1)
		if (rev_rot(struc_a) && rev_rot(struc_b))
			ft_putstr("rrr\n");
}

int				rev_rot_a(t_arr *struc_a)
{
	if (!arr_is_empty(struc_a) && struc_a->top > 1 && rev_rot(struc_a))
	{
		ft_putstr("rra\n");
		return (1);
	}
	return (0);
}

int				rev_rot_b(t_arr *struc_b)
{
	if (!arr_is_empty(struc_b) && struc_b->top > 1 && rev_rot(struc_b))
	{
		ft_putstr("rrb\n");
		return (1);
	}
	return (0);
}
