# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmiantud <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/24 11:16:31 by zmiantud          #+#    #+#              #
#    Updated: 2018/09/01 09:41:17 by zmiantud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = push_swap

NAME2 = checker

SRCS1 := ./p_swap/main.c
SRCS1 += ./p_swap/p_oper.c
SRCS1 += ./p_swap/r_oper.c
SRCS1 += ./p_swap/rr_oper.c
SRCS1 += ./p_swap/s_oper.c
SRCS1 += ./p_swap/error_handling.c
SRCS1 += ./p_swap/popul_stack.c
SRCS1 += ./p_swap/pu_swap.c
SRCS1 += ./p_swap/find_lowest.c
SRCS1 += ./p_swap/sort_3.c
SRCS1 += ./p_swap/sort_5_10.c
SRCS1 += ./p_swap/find_lowest_index.c
SRCS1 += ./p_swap/ft_index_mid_num.c
SRCS1 += ./p_swap/make_args.c
SRCS1 += ./p_swap/arraydel.c
SRCS1 += ./p_swap/ft_free_argv.c
SRCS1 += ./p_swap/ft_free.c

SRCS2 := ./p_checker/main.c
SRCS2 += ./p_checker/p_oper.c
SRCS2 += ./p_checker/r_oper.c
SRCS2 += ./p_checker/rr_oper.c
SRCS2 += ./p_checker/s_oper.c
SRCS2 += ./p_checker/error_handling.c
SRCS2 += ./p_checker/popul_stack.c
SRCS2 += ./p_checker/make_args.c
SRCS2 += ./p_checker/arraydel.c
SRCS2 += ./p_checker/get_and_apply_oper.c
SRCS2 += ./p_checker/ft_free.c
SRCS2 += ./p_checker/ft_free_argv.c

CC = gcc

FLAGS = -Wall -Werror -Wextra 

P_SWAP_INCL = -I./includes/push_swap

CHECKER_INCL = -I./includes/checker

OBJ1 = $(SRCS1:.c=.o) 

OBJ2 = $(SRCS2:.c=.o)

all: $(NAME1) $(NAME2)

$(NAME1): $(OBJ1)
	@make -C ./libft
	@echo "\033[34mCreating $(NAME1)...\033[0m"
	@$(CC) -o $(NAME1) $(FLAGS) $(P_SWAP_INCL) $(OBJ1) ./libft/libft.a
	@echo "\033[32m$(NAME1) created successfully\033[0m"

$(NAME2): $(OBJ2)
	@echo "\033[34mCreating $(NAME2)...\033[0m"
	@$(CC) -o $(NAME2) $(FLAGS) $(CHECKER_INCL) $(OBJ2) ./libft/libft.a
	@echo "\033[32m$(NAME2) created successfully\033[0m"

clean:
	@echo "\033[33mRemoving .o files of $(NAME1) and $(NAME2) ...\033[0m"
	@make clean -C ./libft
	@rm -f $(OBJ1) $(OBJ2)
	@echo "\033[31m.o files removed\033[0m"

fclean: clean
	@echo "\033[33mRemoving $(NAME1) and $(NAME2)...\033[0m"
	@make fclean -C ./libft
	@rm -f $(NAME1) $(NAME2)
	@echo "\033[31m$(NAME1) and $(NAME2) removed successfully\033[0m"

re: fclean all
