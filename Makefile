# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/30 06:12:21 by sismaili          #+#    #+#              #
#    Updated: 2022/03/02 13:08:49 by sismaili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.c \
		valid.c \
		gnl/get_next_line.c \
		gnl/get_next_line_utils.c \
		mouvements.c \
		put_map.c \
		window.c \
		path.c \

SRC_BONUS = main_bonus.c \
				valid_bonus.c \
				gnl/get_next_line.c \
				gnl/get_next_line_utils.c \
				mouvements_bonus.c \
				put_map_bonus.c \
				window_bonus.c \
				sprite_bonus.c \
				pain_bonus.c \
				ft_itoa_bonus.c \
				stance_bonus.c \
				loop_bonus.c \
				path_bonus.c

OBJS = ${SRC:.c=.o}

OBJS_BONUS = ${SRC_BONUS:.c=.o}

NAME    = so_long

NAME_BONUS = so_long_bonus

CC      = cc

RM      = rm -f

CFLAGS = -Wall -Wextra -Werror

CCOMPILE = -lmlx -framework OpenGL -framework AppKit

FT_PRINTF = libftprintf.a

SRC_FT_PRINTF = ft_printf1/ft_flags2.c \
			ft_printf1/ft_putstr.c \
			ft_printf1/ft_hexa.c \
			ft_printf1/ft_putchar.c \
			ft_printf1/ft_sharp.c \
			ft_printf1/ft_memory.c \
			ft_printf1/ft_putnbr.c \
			ft_printf1/ft_space_plus.c \
			ft_printf1/ft_printf.c \
			ft_printf1/ft_putnbr_unsigned.c

OBJ_FT_PRINTF = $(SRC_FT_PRINTF:.c=.o)

all: $(NAME)

${FT_PRINTF} : $(OBJ_FT_PRINTF)
	ar rc ${FT_PRINTF} $(OBJ_FT_PRINTF)
	
%.o : %.c
	${CC} ${CFLAGS} -c $< -o $@

$(NAME): ${OBJS} ${FT_PRINTF}
	${CC} ${CFLAGS} ${CCOMPILE} ${SRC} ${FT_PRINTF} -o ${NAME}

$(NAME_BONUS): ${OBJS_BONUS} ${FT_PRINTF}
	${CC} ${CFLAGS} ${CCOMPILE} ${SRC_BONUS} ${FT_PRINTF} -o ${NAME}

bonus: $(NAME_BONUS)

clean:
	${RM} ${OBJS} ${OBJS_BONUS} $(OBJ_FT_PRINTF)

fclean: clean
		${RM} ${NAME} ${NAME_BONUS} ${FT_PRINTF}

re: fclean all

.PHONY: bonus all clean fclean re