/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmiantud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 11:49:34 by zmiantud          #+#    #+#             */
/*   Updated: 2018/08/31 16:57:55 by zmiantud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker/checker.h"

void	ft_free(t_arr *stack_a, t_arr *stack_b)
{
	free(stack_a->items);
	free(stack_b->items);
}
