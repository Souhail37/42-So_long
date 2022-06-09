/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprite_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:23:58 by sismaili          #+#    #+#             */
/*   Updated: 2022/03/01 22:19:02 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_sprite(t_data *mlx)
{
	static int	w;

	if (w == 1000)
		mlx_put_image_to_window(mlx->mlx, mlx->win,
			mlx->st.st1, mlx->px, mlx->py);
	else if (w == 2000)
		mlx_put_image_to_window(mlx->mlx, mlx->win,
			mlx->st.st2, mlx->px, mlx->py);
	else if (w == 3000)
		mlx_put_image_to_window(mlx->mlx, mlx->win,
			mlx->st.st3, mlx->px, mlx->py);
	else if (w == 4000)
		mlx_put_image_to_window(mlx->mlx, mlx->win,
			mlx->st.st4, mlx->px, mlx->py);
	else if (w == 5000)
	{
		mlx_put_image_to_window(mlx->mlx, mlx->win,
			mlx->st.st5, mlx->px, mlx->py);
		w = 0;
	}
	w++;
	return (0);
}

int	ft_sprite1(t_data *mlx)
{
	static int	w;

	if (w == 500)
		mlx_put_image_to_window(mlx->mlx, mlx->win,
			mlx->run.run1, mlx->px, mlx->py);
	else if (w == 1000)
		mlx_put_image_to_window(mlx->mlx, mlx->win,
			mlx->run.run2, mlx->px, mlx->py);
	else if (w == 1500)
		mlx_put_image_to_window(mlx->mlx, mlx->win,
			mlx->run.run3, mlx->px, mlx->py);
	else if (w == 2000)
		mlx_put_image_to_window(mlx->mlx, mlx->win,
			mlx->run.run4, mlx->px, mlx->py);
	else if (w == 2500)
	{
		mlx_loop_hook(mlx->mlx, ft_sprite, mlx);
		w = 0;
	}
	w++;
	return (0);
}

int	ft_sprite2(t_data *mlx)
{
	static int	w;

	if (w == 500)
		mlx_put_image_to_window(mlx->mlx, mlx->win,
			mlx->mrun.mrun1, mlx->px, mlx->py);
	else if (w == 1000)
		mlx_put_image_to_window(mlx->mlx, mlx->win,
			mlx->mrun.mrun2, mlx->px, mlx->py);
	else if (w == 1500)
		mlx_put_image_to_window(mlx->mlx, mlx->win,
			mlx->mrun.mrun3, mlx->px, mlx->py);
	else if (w == 2000)
		mlx_put_image_to_window(mlx->mlx, mlx->win,
			mlx->mrun.mrun4, mlx->px, mlx->py);
	else if (w == 2500)
	{
		mlx_loop_hook(mlx->mlx, ft_sprite, mlx);
		w = 0;
	}
	w++;
	return (0);
}
