/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouvements_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:08:41 by sismaili          #+#    #+#             */
/*   Updated: 2022/03/01 18:10:33 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

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
	char	*tmp;

	if (mlx->tab[mlx->mv - 1] == 'C')
	{
		mlx ->tab[mlx->mv - 1] = '0';
		mlx->check = 1;
	}
	mlx->check = c_check(mlx, b);
	if (mlx->tab[mlx->mv - 1] == 'e' && mlx->check)
	{
		ft_printf("-----Congratulations !-----");
		exit (0);
	}
	mlx->mv--;
	mlx->px -= 60;
	mlx->i += 1;
	img.img = mlx_xpm_file_to_image(mlx->mlx, "pics/konoha.xpm", &img.x, &b);
	mlx_put_image_to_window(mlx->mlx, mlx->win, img.img, 0, 0);
	tmp = ft_itoa(mlx->i);
	mlx_string_put(mlx->mlx, mlx->win, 0, 0, 0xcc6600, tmp);
	free (tmp);
}

void	key_1(t_data *mlx, t_struct img, int b)
{
	char	*tmp;

	if (mlx->tab[mlx->mv + mlx->j] == 'C')
	{
		mlx ->tab[mlx->mv + mlx->j] = '0';
		mlx->check = 1;
	}
	mlx->check = c_check(mlx, b);
	if (mlx->tab[mlx->mv + mlx->j] == 'e' && mlx->check)
	{
		ft_printf("-----Congratulations !-----");
		exit (0);
	}
	mlx->mv += mlx->j;
	mlx->py += 60;
	mlx->i += 1;
	img.img = mlx_xpm_file_to_image(mlx->mlx, "pics/konoha.xpm", &img.x, &b);
	mlx_put_image_to_window(mlx->mlx, mlx->win, img.img, 0, 0);
	tmp = ft_itoa(mlx->i);
	mlx_string_put(mlx->mlx, mlx->win, 0, 0, 0xcc6600, tmp);
	free (tmp);
}

void	key_2(t_data *mlx, t_struct img, int b)
{
	char	*tmp;

	if (mlx->tab[mlx->mv + 1] == 'C')
	{
		mlx ->tab[mlx->mv + 1] = '0';
		mlx->check = 1;
	}
	mlx->check = c_check(mlx, b);
	if (mlx->tab[mlx->mv + 1] == 'e' && mlx->check)
	{
		ft_printf("-----Congratulations !-----");
		exit (0);
	}
	mlx->mv++;
	mlx->px += 60;
	mlx->i += 1;
	img.img = mlx_xpm_file_to_image(mlx->mlx, "pics/konoha.xpm", &img.x, &b);
	mlx_put_image_to_window(mlx->mlx, mlx->win, img.img, 0, 0);
	tmp = ft_itoa(mlx->i);
	mlx_string_put(mlx->mlx, mlx->win, 0, 0, 0xcc6600, tmp);
	free (tmp);
}

void	key_13(t_data *mlx, t_struct img, int b)
{
	char	*tmp;

	if (mlx->tab[mlx->mv - mlx->j] == 'C')
	{
		mlx ->tab[mlx->mv - mlx->j] = '0';
		mlx->check = 1;
	}
	mlx->check = c_check(mlx, b);
	if (mlx->tab[mlx->mv - mlx->j] == 'e' && mlx->check)
	{
		ft_printf("-----Congratulations !-----");
		exit (0);
	}
	mlx->mv -= mlx->j;
	mlx->py -= 60;
	mlx->i += 1;
	img.img = mlx_xpm_file_to_image(mlx->mlx, "pics/konoha.xpm", &img.x, &b);
	mlx_put_image_to_window(mlx->mlx, mlx->win, img.img, 0, 0);
	tmp = ft_itoa(mlx->i);
	mlx_string_put(mlx->mlx, mlx->win, 0, 0, 0xcc6600, tmp);
	free (tmp);
}
