/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouvements.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:08:41 by sismaili          #+#    #+#             */
/*   Updated: 2022/02/21 17:24:01 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	exit_check(t_data *mlx)
{
	if (mlx->check)
	{
		if (mlx->tab[mlx->mv - 1] == 'E')
			mlx->tab[mlx->mv - 1] = 'e';
		else if (mlx->tab[mlx->mv + mlx->j] == 'E')
			mlx->tab[mlx->mv + mlx->j] = 'e';
		else if (mlx->tab[mlx->mv + 1] == 'E')
			mlx->tab[mlx->mv + 1] = 'e';
		else if (mlx->tab[mlx->mv - mlx->j] == 'E')
			mlx->tab[mlx->mv - mlx->j] = 'e';
	}
}

void	key_0(t_data *mlx, t_struct img, int b)
{
	if (mlx->tab[mlx->mv - 1] == 'C')
	{
		mlx ->tab[mlx->mv - 1] = '0';
		mlx->check = 1;
	}
	while (mlx->tab[b])
	{
		if (mlx->tab[b] == 'C')
			mlx->check = 0;
		b++;
	}
	if (mlx->tab[mlx->mv - 1] == 'e' && mlx->check)
	{
		ft_printf("-----Congratulations !-----");
		exit (0);
	}
	mlx->mv--;
	mlx_put_image_to_window(mlx->mlx, mlx->win, img.img, mlx->px, mlx->py);
	img.img = mlx_xpm_file_to_image(mlx->mlx, "pics/na.xpm", &img.x, &img.y);
	mlx->px -= 60;
	mlx_put_image_to_window(mlx->mlx, mlx->win, img.img, mlx->px, mlx->py);
	mlx->i += 1;
	ft_printf("%d\n", mlx->i);
}

void	key_1(t_data *mlx, t_struct img, int b)
{
	if (mlx->tab[mlx->mv + mlx->j] == 'C')
	{
		mlx ->tab[mlx->mv + mlx->j] = '0';
		mlx->check = 1;
	}
	while (mlx->tab[b])
	{
		if (mlx->tab[b] == 'C')
			mlx->check = 0;
		b++;
	}
	if (mlx->tab[mlx->mv + mlx->j] == 'e' && mlx->check)
	{
		ft_printf("-----Congratulations !-----");
		exit (0);
	}
	mlx->mv += mlx->j;
	mlx_put_image_to_window(mlx->mlx, mlx->win, img.img, mlx->px, mlx->py);
	img.img = mlx_xpm_file_to_image(mlx->mlx, "pics/na.xpm", &img.x, &img.y);
	mlx->py += 60;
	mlx_put_image_to_window(mlx->mlx, mlx->win, img.img, mlx->px, mlx->py);
	mlx->i += 1;
	ft_printf("%d\n", mlx->i);
}

void	key_2(t_data *mlx, t_struct img, int b)
{
	if (mlx->tab[mlx->mv + 1] == 'C')
	{
		mlx ->tab[mlx->mv + 1] = '0';
		mlx->check = 1;
	}
	while (mlx->tab[b])
	{
		if (mlx->tab[b] == 'C')
			mlx->check = 0;
		b++;
	}
	if (mlx->tab[mlx->mv + 1] == 'e' && mlx->check)
	{
		ft_printf("-----Congratulations !-----");
		exit (0);
	}
	mlx->mv++;
	mlx_put_image_to_window(mlx->mlx, mlx->win, img.img, mlx->px, mlx->py);
	img.img = mlx_xpm_file_to_image(mlx->mlx, "pics/na.xpm", &img.x, &img.y);
	mlx->px += 60;
	mlx_put_image_to_window(mlx->mlx, mlx->win, img.img, mlx->px, mlx->py);
	mlx->i += 1;
	ft_printf("%d\n", mlx->i);
}

void	key_13(t_data *mlx, t_struct img, int b)
{
	if (mlx->tab[mlx->mv - mlx->j] == 'C')
	{
		mlx ->tab[mlx->mv - mlx->j] = '0';
		mlx->check = 1;
	}
	while (mlx->tab[b])
	{
		if (mlx->tab[b] == 'C')
			mlx->check = 0;
		b++;
	}
	if (mlx->tab[mlx->mv - mlx->j] == 'e' && mlx->check)
	{
		ft_printf("-----Congratulations !-----");
		exit (0);
	}
	mlx->mv -= mlx->j;
	mlx_put_image_to_window(mlx->mlx, mlx->win, img.img, mlx->px, mlx->py);
	img.img = mlx_xpm_file_to_image(mlx->mlx, "pics/na.xpm", &img.x, &img.y);
	mlx->py -= 60;
	mlx_put_image_to_window(mlx->mlx, mlx->win, img.img, mlx->px, mlx->py);
	mlx->i += 1;
	ft_printf("%d\n", mlx->i);
}
