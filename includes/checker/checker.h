/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmiantud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 08:29:53 by zmiantud          #+#    #+#             */
/*   Updated: 2018/08/31 18:27:43 by zmiantud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include "../../libft/libft.h"

typedef struct		s_arr
{
	int				*items;
	int				max_size;
	int				top;
	int				k;
}					t_arr;

void				push_into_a(t_arr *stru_a, t_arr *stru_b);
void				push_into_b(t_arr *stru_a, t_arr *stru_b);

int					swap_a(t_arr *stru_a);
int					swap_b(t_arr *stru_b);
void				swap_both(t_arr *stru_a, t_arr *stru_b);

int					rotate_a(t_arr *stru_a);
int					rotate_b(t_arr *stru_b);
void				rotate_both(t_arr *stru_a, t_arr *stru_b);

int					rev_rot_a(t_arr *stru_a);
int					rev_rot_b(t_arr *stru_b);
void				rev_rot_both(t_arr *stru_a, t_arr *stru_b);

int					ft_atoi2(const char *str);
void				popul_stack(t_arr *stck_a, t_arr *stck_b, int c, char **v);

int					arr_is_empty(t_arr *stru);
int					is_int(char *s);
int					is_duplicate(t_arr *stack);

int					is_sorted(t_arr *stack_a);
int					is_top_odd(t_arr *stack);

void				ft_free(t_arr *stack_a, t_arr *stack_b);
void				ft_free_argv(char **argv);

char				**make_args(int *argc, char **argv, t_arr *stack_a);
void				arraydel(char **arr);
int					get_and_apply_oper(t_arr *stack_a, t_arr *stack_b, char **av);

#endif
