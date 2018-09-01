/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_swap.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmiantud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 08:39:44 by zmiantud          #+#    #+#             */
/*   Updated: 2018/08/31 17:06:16 by zmiantud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_SWAP_H
# define P_SWAP_H
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

void				popul_stack(t_arr *stck_a, t_arr *stck_b, int c, char **v);

int					arr_is_empty(t_arr *stru);
int					is_int(char *s);
int					is_duplicate(t_arr *stack);

int					is_sorted(t_arr *stack_a);
int					is_top_odd(t_arr *stack);

int					find_lowest(t_arr *stack);
int					find_lowest_index(t_arr *stack);
int					ft_index_mid_num(t_arr *stack);

void				sort_3(t_arr *stack);
void				sort_5_10(t_arr *stack_a, t_arr *stack_b);

void				pu_swap(t_arr *stack_a, t_arr *stack_b);
char				**make_args(int *argc, char **argv, t_arr *ar1);

void				arraydel(char **arr);
void				ft_free_argv(char **argv);
void				ft_free(t_arr *stack_a, t_arr *stack_b);
void				semi_free(t_arr *ar1, t_arr *ar2);

#endif
