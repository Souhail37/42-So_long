/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pain_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <sismaili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:32:52 by sismaili          #+#    #+#             */
/*   Updated: 2022/02/21 17:25:07 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	put_pain(t_data mlx, t_struct img)
{
	img.img = mlx_xpm_file_to_image(mlx.mlx, "pics/pst.xpm", &img.x, &img.y);
	mlx.i = 0;
	img.x = 0;
	img.y = 0;
	while (mlx.tab[mlx.i])
	{
		if (mlx.tab[mlx.i] == 'N')
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

void	pain_check(int key, t_data *mlx)
{
	if (key == 0 && mlx->tab[mlx->mv - 1] == 'N')
	{
		ft_printf("-----You lost ! You can try again -----");
		exit (0);
	}
	else if (key == 1 && mlx->tab[mlx->mv + mlx->j] == 'N')
	{
		ft_printf("-----You lost ! You can try again -----");
		exit (0);
	}
	else if (key == 2 && mlx->tab[mlx->mv + 1] == 'N')
	{
		ft_printf("-----You lost ! You can try again -----");
		exit (0);
	}
	else if (key == 13 && mlx->tab[mlx->mv - mlx->j] == 'N')
	{
		ft_printf("-----You lost ! You can try again -----");
		exit (0);
	}
}
