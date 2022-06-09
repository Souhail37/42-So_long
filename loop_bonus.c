/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:42:55 by sismaili          #+#    #+#             */
/*   Updated: 2022/02/18 16:49:46 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_loop1(t_data *mlx, t_struct img, int key, int b)
{
	if (key == 0)
	{
		key_0(mlx, img, b);
		mlx_loop_hook(mlx->mlx, ft_sprite2, mlx);
		mlx_put_image_to_window(mlx->mlx, mlx->win,
			img.img, mlx->px + 60, mlx->py);
	}
	else if (key == 1)
	{
		key_1(mlx, img, b);
		mlx_loop_hook(mlx->mlx, ft_sprite1, mlx);
		mlx_put_image_to_window(mlx->mlx, mlx->win,
			img.img, mlx->px, mlx->py - 60);
	}
}

void	ft_loop2(t_data *mlx, t_struct img, int key, int b)
{
	if (key == 2)
	{
		key_2(mlx, img, b);
		mlx_loop_hook(mlx->mlx, ft_sprite1, mlx);
		mlx_put_image_to_window(mlx->mlx, mlx->win,
			img.img, mlx->px - 60, mlx->py);
	}
	else if (key == 13)
	{
		key_13(mlx, img, b);
		mlx_loop_hook(mlx->mlx, ft_sprite1, mlx);
		mlx_put_image_to_window(mlx->mlx, mlx->win,
			img.img, mlx->px, mlx->py + 60);
	}
}
