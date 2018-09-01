/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmiantud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 14:11:54 by zmiantud          #+#    #+#             */
/*   Updated: 2018/09/01 09:04:18 by zmiantud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap/p_swap.h"

static int		count_in_temp(char **str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	arraydel(str);
	if (i > 1)
		return (0);
	return (1);
}

char			**make_args(int *argc, char **argv, t_arr *stack_a)
{
	char	**temp;
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = -1;
	if (*argc == 2)
	{
		ptr = ft_strjoin("push ", argv[1]);
		argv = ft_strsplit(ptr, ' ');
		free(ptr);
		while (argv[i])
			i++;
		*argc = i;
		stack_a->k = 1;
	}
	else
		while (i <= *argc - 1)
		{
			temp = ft_strsplit(argv[i++], ' ');
			if (count_in_temp(temp) == 0 && ft_putendl2("\033[33mError\033[0m"))
				exit(0);
		}
	return (argv);
}
