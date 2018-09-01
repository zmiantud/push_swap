/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmiantud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 16:31:20 by zmiantud          #+#    #+#             */
/*   Updated: 2018/09/01 09:03:33 by zmiantud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap/p_swap.h"

int		arr_is_empty(t_arr *stack)
{
	if (!stack->top)
		return (1);
	return (0);
}

int		is_duplicate(t_arr *stack_a)
{
	int		i;
	int		j;
	int		num;

	i = -1;
	while (++i < stack_a->top)
	{
		num = stack_a->items[i];
		j = i + 1;
		while (j < stack_a->top)
			if (stack_a->items[j++] == num)
				return (1);
	}
	return (0);
}

int		is_sorted(t_arr *stack)
{
	int		i;
	int		j;
	int		max;

	i = -1;
	while (++i < stack->top)
	{
		max = stack->items[i];
		j = i + 1;
		while (j < stack->top)
			if (stack->items[j++] < stack->items[i])
				return (0);
	}
	return (1);
}

int		is_top_odd(t_arr *stack)
{
	if (stack->top % 2 == 0)
		return (0);
	return (1);
}

int		is_int(char *s)
{
	int		num;
	char	*temp;
	char	*trim;

	num = ft_atoi(s);
	temp = ft_itoa(num);
	trim = ft_strtrim2(s);
	if (ft_strcmp(temp, trim) == 0)
	{
		free(trim);
		free(temp);
		return (1);
	}
	free(trim);
	free(temp);
	return (0);
}
