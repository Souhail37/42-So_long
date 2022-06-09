/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:08:11 by sismaili          #+#    #+#             */
/*   Updated: 2022/02/21 20:33:43 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_wall(t_data mlx, t_struct img)
{
	img.img = mlx_xpm_file_to_image(mlx.mlx, "pics/orange.xpm", &img.x, &img.y);
	mlx.i = 0;
	img.x = 0;
	img.y = 0;
	while (mlx.tab[mlx.i])
	{
		if (mlx.tab[mlx.i] == '0')
			mlx_put_image_to_window(mlx.mlx, mlx.win, img.img, img.x, img.y);
		img.x += 60;
		if (mlx.tab[mlx.i] == '\n')
		{
			img.x = 0;
			img.y += 60;
		}
		mlx.i++;
	}
}

void	valid_map1(char *str, int x, int j)
{
	x = 0;
	while (str[x] && x < j - 1)
	{
		if (str[x] != '1')
		{
			ft_printf("ERROR !");
			exit (0);
		}
		x++;
	}
}

void	valid_map2(char *tab, char *rm, t_struct img)
{
	img.x = 0;
	while (tab[img.x])
	{
		if (tab[img.x + 1] == '\n' || tab[img.x - 1] == '\n')
		{
			if (tab[img.x] != '1')
			{
				ft_printf("ERROR !");
				exit (0);
			}
		}
		img.x++;
	}
	img.y = 0;
	while (rm[img.y])
		img.y++;
	while (rm[--img.y] != '\n')
	{
		if (rm[img.y] != '1')
		{
			ft_printf("ERROR !");
			exit (0);
		}
	}
}

void	valid_map3(t_data mlx, t_point check)
{
	check.line = 0;
	check.checker = 0;
	while (mlx.tab[check.line] != '\n')
		check.line++;
	check.line++;
	while (mlx.tab[check.line])
	{
		if (mlx.tab[check.line] != '\n')
			check.checker++;
		else
		{
			if (check.checker < mlx.j - 1 || check.checker > mlx.j - 1)
			{
				ft_printf("ERROR !");
				exit (0);
			}
			check.checker = 0;
		}
		check.line++;
	}
	if (check.checker < mlx.j - 1 || check.checker > mlx.j - 1)
	{
		ft_printf("ERROR !");
		exit (0);
	}
}
