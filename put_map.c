/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:37:03 by sismaili          #+#    #+#             */
/*   Updated: 2022/02/22 21:57:09 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_1(t_data mlx, t_struct img)
{
	img.img = mlx_xpm_file_to_image(mlx.mlx, "pics/konoha.xpm", &img.x, &img.y);
	mlx.i = 0;
	img.x = 0;
	img.y = 0;
	while (mlx.tab[mlx.i])
	{
		if (mlx.tab[mlx.i] == '1')
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

int	put_2(t_data mlx, t_struct img, int test, int hand)
{
	ft_init(&mlx, &img, &test);
	while (mlx.tab[mlx.i++])
	{
		if (mlx.tab[mlx.i] == 'P' && test)
		{
			mlx_put_image_to_window(mlx.mlx, mlx.win, img.img, mlx.px, mlx.py);
			test = 0;
			hand = mlx.px;
		}
		else if (mlx.tab[mlx.i] == 'P' && test == 0)
		{
			ft_printf("ERROR ! Too many player position\n");
			exit (1);
		}
		mlx.px += 60;
		if (mlx.tab[mlx.i] == '\n')
		{
			mlx.px = 0;
			mlx.py += 60;
		}
	}
	if (test == 1)
		exit (1);
	return (hand);
}

void	put_3(t_data mlx, t_struct img)
{
	int	min;

	min = 0;
	img.img = mlx_xpm_file_to_image(mlx.mlx, "pics/ramen2.xpm", &img.x, &img.y);
	mlx.i = 0;
	img.x = 0;
	img.y = 0;
	while (mlx.tab[mlx.i])
	{
		if (mlx.tab[mlx.i] == 'C')
		{
			mlx_put_image_to_window(mlx.mlx, mlx.win, img.img, img.x, img.y);
			min = 1;
		}
		img.x += 60;
		if (mlx.tab[mlx.i] == '\n')
		{
			img.x = 0;
			img.y += 60;
		}
		mlx.i++;
	}
	if (min == 0)
		exit (1);
}

void	put_4(t_data mlx, t_struct img)
{
	int	min;

	min = 0;
	img.img = mlx_xpm_file_to_image(mlx.mlx, "pics/odoor.xpm", &img.x, &img.y);
	mlx.i = 0;
	img.x = 0;
	img.y = 0;
	while (mlx.tab[mlx.i])
	{
		if (mlx.tab[mlx.i] == 'E')
		{
			mlx_put_image_to_window(mlx.mlx, mlx.win, img.img, img.x, img.y);
			min = 1;
		}
		img.x += 60;
		if (mlx.tab[mlx.i] == '\n')
		{
			img.x = 0;
			img.y += 60;
		}
		mlx.i++;
	}
	if (min == 0)
		exit (1);
}

void	map_check(t_data mlx)
{
	mlx.i = 0;
	while (mlx.tab[mlx.i])
	{
		if (mlx.tab[mlx.i] != '1' && mlx.tab[mlx.i] != 'C'
			&& mlx.tab[mlx.i] != 'E' && mlx.tab[mlx.i] != '0'
			&& mlx.tab[mlx.i] != 'P' && mlx.tab[mlx.i] != '\n')
		{
			ft_printf("Unknown character\n");
			exit (1);
		}
		mlx.i++;
	}
}
