/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:14:44 by sismaili          #+#    #+#             */
/*   Updated: 2022/02/22 21:57:39 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "gnl/get_next_line.h"
# include "ft_printf1/ft_printf.h"
# include <fcntl.h>
# include <mlx.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

typedef struct w_data
{
	void	*mlx;
	void	*win;
	char	*tab;
	int		px;
	int		py;
	int		i;
	int		j;
	int		mv;
	int		check;
}	t_data;

typedef struct s_data
{
	void	*img;
	char	*address;
	int		bpp;
	int		ls;
	int		en;
	int		x;
	int		y;
}	t_struct;

typedef struct data
{
	char	*str;
	char	*rm;
	int		line;
	int		checker;
}	t_point;

void	ft_wall(t_data mlx, t_struct img);
char	*get_next_line(int fd);
void	valid_map1(char *str, int x, int j);
void	valid_map2(char *tab, char *rm, t_struct img);
void	valid_map3(t_data mlx, t_point check);
int		key_tap(int key, t_data *mlx, int x, int y);
void	exit_check(t_data *mlx);
void	key_0(t_data *mlx, t_struct img, int b);
void	key_1(t_data *mlx, t_struct img, int b);
void	key_2(t_data *mlx, t_struct img, int b);
void	key_13(t_data *mlx, t_struct img, int b);
void	put_1(t_data mlx, t_struct img);
int		put_2(t_data mlx, t_struct img, int test, int hand);
void	put_3(t_data mlx, t_struct img);
void	put_4(t_data mlx, t_struct img);
int		put_2_0(t_data mlx, t_struct img);
int		put_2_1(t_data mlx, t_struct img);
void	ft_window(t_data mlx, t_struct img);
void	key_53(t_data *mlx);
int		mouse_17(int mouse, t_data *mlx);
void	push(t_data mlx, t_struct img);
void	map_check(t_data mlx);
int		ft_valide_path(char *path);
void	ft_init(t_data *mlx, t_struct *img, int *test);
void	ft_strings(t_data *mlx, t_point *valid, int fd);

#endif
