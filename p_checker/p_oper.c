/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_oper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmiantud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 08:46:51 by zmiantud          #+#    #+#             */
/*   Updated: 2018/08/31 16:59:03 by zmiantud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker/checker.h"

void		push_into_a(t_arr *stack_a, t_arr *stack_b)
{
	int		temp;

	if (arr_is_empty(stack_b))
		return ;
	temp = (stack_b->items)[0];
	ft_memmove(&(stack_b->items[0]), &(stack_b->items[1]),
		sizeof(int) * (stack_b->top));
	ft_memmove(&(stack_a->items[1]), &(stack_a->items[0]),
		sizeof(int) * (stack_a->top));
	(stack_a->items)[0] = temp;
	(stack_a->top)++;
	(stack_b->top)--;
}

void		push_into_b(t_arr *stack_a, t_arr *stack_b)
{
	int		temp;

	if (arr_is_empty(stack_a))
		return ;
	temp = (stack_a->items)[0];
	ft_memmove(&(stack_a->items[0]), &(stack_a->items[1]),
		sizeof(int) * (stack_a->top));
	ft_memmove(&(stack_b->items[1]), &(stack_b->items[0]),
		sizeof(int) * (stack_b->top));
	(stack_b->items)[0] = temp;
	(stack_a->top)--;
	(stack_b->top)++;
}
