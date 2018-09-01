/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_oper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmiantud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 16:42:34 by zmiantud          #+#    #+#             */
/*   Updated: 2018/08/31 16:59:27 by zmiantud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker/checker.h"

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
	{
		rotate_a(struc_a);
		rotate_b(struc_b);
	}
}

int				rotate_a(t_arr *struc_a)
{
	if (!arr_is_empty(struc_a) && struc_a->top > 1 && rotate(struc_a))
		return (1);
	return (0);
}

int				rotate_b(t_arr *struc_b)
{
	if (!arr_is_empty(struc_b) && struc_b->top > 1 && rotate(struc_b))
		return (1);
	return (0);
}
